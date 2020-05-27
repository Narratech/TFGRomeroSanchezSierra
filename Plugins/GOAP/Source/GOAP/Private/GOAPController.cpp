/**
	GOAP: Goal-Oriented Action Planning.

	GNU Lesser General Public License v3.0

	Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.
 */
#include "GOAPController.h"

AGOAPController::AGOAPController() {}

void AGOAPController::BeginPlay()
{

	for (auto i = 0; i < actions.Num(); ++i) {
		FString aux = actions[i].GetDefaultObject()->GetName();
		auxActions.push_back(actions[i].GetDefaultObject());
	}

	for (FAtom atom : currentWorld)
		wsCurrentWorld.addAtom(atom.name, atom.value);

	for (FAtom atom : desiredWorld)
		wsDesiredWorld.addAtom(atom.name, atom.value);

	for (UGOAPAction* a : auxActions)
		a->create_P_E();

	planner = new GOAPPlanner(&wsCurrentWorld, &wsDesiredWorld, auxActions);

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

	try {
		// Create the cheapest plan of actions.
		plan = planner->generatePlan(GetPawn());

		if (plan.Num() > 0) {

			UGOAPAction* aux = plan[plan.Num() - 1];

			// Perform an action and when it is done its effects are applied, changing the current world state.
			if (aux->doAction(GetPawn())) {
				wsCurrentWorld.joinWorldState(aux->getEffects());
			}

		}
		else return false;
	}
	catch (...) {
		UE_LOG(LogTemp, Warning, TEXT("An error has occurred while generating the plan."));
		return false;
	}

	return true;
}

TArray<UGOAPAction*> AGOAPController::getPlan() {

	return plan;
}

void AGOAPController::setGoal(TArray<FAtom> newGoal) {

	wsDesiredWorld.cleanAtoms();

	for (FAtom atom : newGoal)
		wsDesiredWorld.addAtom(atom.name, atom.value);
}