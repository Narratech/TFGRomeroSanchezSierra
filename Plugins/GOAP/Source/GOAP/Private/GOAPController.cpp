/**
	GOAP NPC: Goal-Oriented Action Planning for Non-Player Characters.

	GNU Lesser General Public License v3.0

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
	for (auto i = 0; i < actions.Num(); ++i) {
		FString aux = actions[i].GetDefaultObject()->GetName();
		auxActions.push_back(actions[i].GetDefaultObject());
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

	// Error messages.
	if(auxActions.size() == 0)
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

bool AGOAPController::executeGOAP() {


	if (auxActions.size() > 0 && !wsCurrentWorld.isEmpty() && !wsDesiredWorld.isEmpty()) {

		// Creates the cheapest plan of actions.
		plan = planner->generatePlan(GetPawn());

		if (plan.Num() > 0) {
				
			// Gets next action to perform.
			UGOAPAction* aux = plan[plan.Num() - 1];

			// Performs an action and when it's done its effects are applied, changing the current world state.
			if (aux->doAction(GetPawn())) {
				wsCurrentWorld.joinWorldState(aux->getEffects());
			}

			return true;
		}		
	}

	return false;
}

TArray<UGOAPAction*> AGOAPController::getPlan() {

	return plan;
}

void AGOAPController::setGoal(TArray<FAtom> newGoal) {

	wsDesiredWorld.cleanAtoms();

	for (FAtom atom : newGoal)
		wsDesiredWorld.addAtom(atom.name, atom.value);
}
