// Fill out your copyright notice in the Description page of Project Settings.


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

bool AGOAPController::executePlannerAction() {

	try {
		plan = planner->generatePlan(GetPawn());

		if (plan.size() > 0) {

			UGOAPAction* aux = plan.at(plan.size() - 1);

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

void AGOAPController::setGoal(TArray<FAtom> newGoal) {

	wsDesiredWorld.cleanAtoms();

	for (FAtom atom : newGoal)
		wsDesiredWorld.addAtom(atom.name, atom.value);
}

FString AGOAPController::getInfoGoalDo() {
	FString sol = "";
	for (auto it : wsDesiredWorld.getAtoms()) {
		if (it.second) {
			sol += it.first + " ";
		}
	}
	return sol;
}

FString AGOAPController::getInfoGoalDont() {
	FString sol = "";
	for (auto it : wsDesiredWorld.getAtoms()) {
		if (!it.second) {
			sol += "" + it.first + " ";
		}
	}
	return sol;
}