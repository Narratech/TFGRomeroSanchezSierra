/**
	GOAP: Goal-Oriented Action Planning.

	GNU Lesser General Public License v3.0

	Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.
 */
#pragma once

#include <vector>
#include "GOAPPlanner.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "GOAPController.generated.h"

/**

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

	UFUNCTION(BlueprintCallable)
	TArray<UGOAPAction*> getPlan();

	UFUNCTION(BlueprintCallable)
	void setGoal(TArray<FAtom> newGoal);
	
};
