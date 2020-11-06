/**
	GOAP NPC: Goal-Oriented Action Planning for Non-Player Characters.

	Publishers/Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.

	Published on 2020.
 */
#include "GOAPController.h"

AGOAPController::AGOAPController() {}

void AGOAPController::BeginPlay()
{
	// Loads actions.
	for (auto i = 0; i < actions.Num(); ++i) 
	{
		if (actions[i]) {
			FString aux = actions[i].GetDefaultObject()->GetName();
			auxActions.Push(actions[i].GetDefaultObject());
		}
	}

	// Loads Current World.
	for (FAtom atom : currentWorld)
		wsCurrentWorld.addAtom(atom.name, atom.value);

	// Loads Desired World.
	for (FAtom atom : desiredWorld)
		wsDesiredWorld.addAtom(atom.name, atom.value);

	// Loads actions' preconditions and effects.
	for (UGOAPAction* a : auxActions)
		a->create_P_E();

	// Loads Planner.
	planner = new GOAPPlanner(&wsCurrentWorld, &wsDesiredWorld, auxActions);
	planner->setMaxDepth(maxDepth);

	// Error messages.
	if(auxActions.Num() == 0)
		UE_LOG(LogTemp, Warning, TEXT("Actions not found in GOAPController."));

	if (wsCurrentWorld.isEmpty())
		UE_LOG(LogTemp, Warning, TEXT("Undefined Current World in GOAPController."));

	if (wsDesiredWorld.isEmpty())
		UE_LOG(LogTemp, Warning, TEXT("Undefined Desired World in GOAPController."));

	Super::BeginPlay();
}

void AGOAPController::OnPossess(APawn * pawn)
{
	Super::OnPossess(pawn);
}

void AGOAPController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AGOAPController::BeginDestroy()
{
	if (planner) {
		delete planner;
		planner = NULL;
	}
	Super::BeginDestroy();
}

bool AGOAPController::executeGOAP() 
{
	if (generatePlan()) 
	{
		if (plan.Num() > 0) 
		{				
			// Gets next action to perform.
			UGOAPAction* aux = plan[plan.Num() - 1];

			// Performs an action and when it's done its effects are applied, changing the current world state.
			if (aux->doAction(GetPawn())) 
			{
				wsCurrentWorld.joinWorldState(aux->getEffects());
			}

			return true;
		}		
	}

	return false;
}

bool AGOAPController::generatePlan() 
{
	if (auxActions.Num() > 0 && !wsDesiredWorld.isEmpty()) //&& !wsCurrentWorld.isEmpty() 
	{
		// Creates the cheapest plan of actions.
		plan = planner->generatePlan(GetPawn());

		return true;
	}

	return false;
}

TArray<UGOAPAction*> AGOAPController::getPlan() 
{
	return plan;
}

void AGOAPController::setGoal(const TArray<FAtom>& newGoal)
{
	wsDesiredWorld.cleanAtoms();
	updateGoal(newGoal);
}

void AGOAPController::updateGoal(const TArray<FAtom>& atoms)
{
	for (FAtom atom : atoms)
		wsDesiredWorld.addAtom(atom.name, atom.value);
}

void AGOAPController::setCurrentWorld(const TArray<FAtom>& newCurrentWorld)
{
	wsCurrentWorld.cleanAtoms();
	updateCurrentWorld(newCurrentWorld);
}

void AGOAPController::updateCurrentWorld(const TArray<FAtom>& atoms)
{
	for (FAtom atom : atoms)
		wsCurrentWorld.addAtom(atom.name, atom.value);
}

TArray<FAtom> AGOAPController::getCurrentWorldStateAtoms()
{
	TArray<FAtom> worldStateAtoms;
	for (auto atoms : wsCurrentWorld.getAtoms())
	{
		worldStateAtoms.Add({atoms.first, atoms.second});
	}

	return worldStateAtoms;
}

TArray<FAtom> AGOAPController::getDesiredWorldStateAtoms()
{
	TArray<FAtom> worldStateAtoms;
	for (auto atoms : wsDesiredWorld.getAtoms())
	{
		worldStateAtoms.Add({ atoms.first, atoms.second });
	}

	return worldStateAtoms;
}
