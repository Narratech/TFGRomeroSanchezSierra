/**
	GOAP: Goal-Oriented Action Planning.

	GNU Lesser General Public License v3.0

	Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.
 */
#pragma once

#include "GOAPWorldState.h"
#include "CoreMinimal.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/NoExportTypes.h"
#include "GOAPAction.generated.h"

/**
* Auxiliary struct to get WorldState's atoms from Blueprints' description.
*/
USTRUCT(BlueprintType, Blueprintable)
struct FAtom
{
	GENERATED_USTRUCT_BODY()

	// Name of the atom.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;

	// Value of the atom.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool value;

};

/**
 * GOAPAction class contains every attribute and function needed to define an action.
 * Represent edges in the planner algorithm.
 */
UCLASS(Blueprintable)
class GOAP_API UGOAPAction : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	FString name;

	// Cost of the action. The planner will take this into account when making the cheapest plan.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	float cost;

	// Object or class type of actor this action's target should have. This can be None if your action doesn't need a target.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	TSubclassOf<AActor> targetsType;

	// Conditions needed to perform the action.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WorldState)
	TArray<FAtom> preconditions;

	// Effects caused by the action.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WorldState)
	TArray<FAtom> effects;


private:

	AActor* target;

	GOAPWorldState wsPreconditions;

	GOAPWorldState wsEffects;

public:

	UGOAPAction();

	// Search all actors of targetsType class located in the world.
	UFUNCTION(BlueprintCallable)
	TArray<AActor*> getTargetsList(APawn* p);

	// Optional function to check if it's possible to perform the action.
	UFUNCTION(BlueprintImplementableEvent)
	bool checkProceduralPrecondition(APawn* p);

	// Performs the action.
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	bool doAction(APawn* p);

	// Generate action's preconditions and effects.
	void create_P_E();

	// COMPARATORS

	bool operator==(UGOAPAction & action);

	bool operator!=(UGOAPAction & action);

	// GETS

	FString getName();

	float getCost();

	// Gets the chosen target from targetList or the one specific in setTarget().
	UFUNCTION(BlueprintCallable)
	AActor* getTarget();

	GOAPWorldState getPreconditions();

	GOAPWorldState getEffects();

	// SETS

	void setName(FString n);

	void setCost(float c);

	// Sets a specific target.
	UFUNCTION(BlueprintCallable)
	void setTarget(AActor* t);

	void setPreconditions(GOAPWorldState preconditionAtoms);

	void setEffects(GOAPWorldState effectAtoms);
};
