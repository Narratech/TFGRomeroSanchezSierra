// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GOAPWorldState.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GOAPAction.generated.h"


USTRUCT(BlueprintType, Blueprintable)
struct FAtom
{
	GENERATED_USTRUCT_BODY()
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool value;

};


UCLASS(Blueprintable, Category = GOAP)
class GOAP_API UGOAPAction : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
		FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
		float cost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
		TArray<TSubclassOf<AActor>> targetsType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WorldState)
		TArray<FAtom> preconditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WorldState)
		TArray<FAtom> effects;


private:
	AActor* target;

	GOAPWorldState wsPreconditions;

	GOAPWorldState wsEffects;

public:

	UGOAPAction();

	UFUNCTION(BlueprintCallable)
		TArray<AActor*> getTargetsList(APawn* p);

	UFUNCTION(BlueprintImplementableEvent)
		bool checkProceduralPrecondition(APawn* p);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		bool doAction(APawn* p);

	void create_P_E();

	// COMPARATORS

	bool operator==(UGOAPAction & action);

	bool operator!=(UGOAPAction & action);

	// GETS

	FString getName();

	float getCost();

	UFUNCTION(BlueprintCallable)
		AActor* getTarget();

	GOAPWorldState getPreconditions();

	GOAPWorldState getEffects();

	// SETS

	void setName(FString n);

	void setCost(float c);

	UFUNCTION(BlueprintCallable)
		void setTarget(AActor* t);

	void setPreconditions(GOAPWorldState preconditionAtoms);

	void setEffects(GOAPWorldState effectAtoms);
	
};
