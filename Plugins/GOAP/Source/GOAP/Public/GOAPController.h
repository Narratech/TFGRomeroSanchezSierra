/**
	GOAP NPC: Goal-Oriented Action Planning for Non-Player Characters.

	GNU Lesser General Public License v3.0

	Publishers/Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.

	Published on 2020.
 */
#pragma once

#include <vector>
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

	std::vector<UGOAPAction*> auxActions;

	TArray<UGOAPAction*> plan;

	GOAPWorldState wsCurrentWorld;

	GOAPWorldState wsDesiredWorld;

public:

	AGOAPController();

	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* pawn) override;

	virtual void Tick(float DeltaSeconds) override;

	// Create and execute the plan.
	UFUNCTION(BlueprintCallable)
	bool executeGOAP();

	// Returns the actions that make up the plan.
	UFUNCTION(BlueprintCallable)
	TArray<UGOAPAction*> getPlan();

	// Sets the goal of the AI, this function can also be used to change the goal.
	UFUNCTION(BlueprintCallable)
	void setGoal(TArray<FAtom> newGoal);

};
