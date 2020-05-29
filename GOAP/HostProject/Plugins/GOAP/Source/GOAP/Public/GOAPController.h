// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <vector>
#include "GOAPPlanner.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "GOAPController.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, Category = GOAP)
class GOAP_API AGOAPController : public AAIController
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GOAP)
		TArray<FAtom> currentWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GOAP)
		TArray<FAtom> desiredWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GOAP)
		TArray<TSubclassOf<UGOAPAction>> actions;

private:

	GOAPPlanner* planner;
	std::vector<UGOAPAction*> auxActions;
	std::vector<UGOAPAction*> plan;
	GOAPWorldState wsCurrentWorld;
	GOAPWorldState wsDesiredWorld;

public:
	AGOAPController();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		bool executePlannerAction();

	UFUNCTION(BlueprintCallable)
		void setGoal(TArray<FAtom> newGoal);

	UFUNCTION(BlueprintCallable)
		FString getInfoGoalDo();

	UFUNCTION(BlueprintCallable)
		FString getInfoGoalDont();
};
