/**
	GOAP NPC: Goal-Oriented Action Planning for Non-Player Characters.

	Publishers/Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.

	Published on 2020.
 */
#pragma once

#include "GOAPPlanner.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "GOAPController.generated.h"

/**
* AIController containg the planner, states of the current and desired world, and the list of available actions the AI can perform.
* Current world and desired world are private for each AI, but it's possible to create a global current world to notify changes to other AIs.
 */
UCLASS()
class GOAP_API AGOAPController : public AAIController
{
	GENERATED_BODY()

public:

	// State of the current world.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GOAP)
	TArray<FAtom> currentWorld;

	// State of the world in wich the goal has been achieved.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GOAP)
	TArray<FAtom> desiredWorld;

	// List of actions AI can do.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GOAP)
	TArray<TSubclassOf<UGOAPAction>> actions;

private:

	GOAPPlanner* planner;

	TArray<UGOAPAction*> auxActions;

	TArray<UGOAPAction*> plan;

	GOAPWorldState wsCurrentWorld;

	GOAPWorldState wsDesiredWorld;

public:

	AGOAPController();

	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* pawn) override;

	virtual void Tick(float DeltaSeconds) override;

	// Creates and execute the plan.
	UFUNCTION(BlueprintCallable, Category = GOAPController)
	bool executeGOAP();

	// Creates actions plan
	UFUNCTION(BlueprintCallable, Category = GOAPController)
	bool generatePlan();

	// Returns the actions that make up the plan.
	UFUNCTION(BlueprintCallable, Category = GOAPController)
	TArray<UGOAPAction*> getPlan();

	// Sets the goal of the AI, this function can also be used to change the goal.
	UFUNCTION(BlueprintCallable, Category = GOAPController)
	void setGoal(const TArray<FAtom>& newGoal);

	// Adds or modifies atoms from the desired world state. Atoms already existing in the desired world state are modified by new input values.
	UFUNCTION(BlueprintCallable, Category = GOAPController)
	void updateGoal(const TArray<FAtom>& atoms);

	// Sets the current world state of the AI, this function can also be used to change the current world state.
	UFUNCTION(BlueprintCallable, Category = GOAPController)
	void setCurrentWorld(const TArray<FAtom>& newCurrentWorld);

	// Adds or modifies atoms from the current world state. Atoms already existing in the current world state are modified by new input values.
	UFUNCTION(BlueprintCallable, Category = GOAPController)
	void updateCurrentWorld(const TArray<FAtom>& atoms);

	// Returns the current world state atoms.
	UFUNCTION(BlueprintCallable, Category = GOAPController)
	TArray<FAtom> getCurrentWorldStateAtoms();

	// Returns the desired world state atoms.
	UFUNCTION(BlueprintCallable, Category = GOAPController)
	TArray<FAtom> getDesiredWorldStateAtoms();
};
