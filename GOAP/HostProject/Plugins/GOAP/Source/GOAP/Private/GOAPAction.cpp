// Fill out your copyright notice in the Description page of Project Settings.


#include "GOAPAction.h"

UGOAPAction::UGOAPAction() {}

void UGOAPAction::create_P_E() {
	for (FAtom itP : preconditions) {
		wsPreconditions.addAtom(itP.name, itP.value);
	}
	for (FAtom itE : effects) {
		wsEffects.addAtom(itE.name, itE.value);
	}
}

TArray<AActor*> UGOAPAction::getTargetsList(APawn* p) {
	TArray<AActor*> actorsFound;
	UGameplayStatics::GetAllActorsOfClass(p->GetWorld(), targetsType[0], actorsFound);
	return actorsFound;
}

bool UGOAPAction::operator==(UGOAPAction & a) {
	return this->cost == a.getCost() && target == a.getTarget() && wsPreconditions == a.getPreconditions() && wsEffects == a.getEffects();
}

bool UGOAPAction::operator!=(UGOAPAction & a) {
	return !(*this == a);
}

// GETS

FString UGOAPAction::getName() {
	return this->name;
}

float UGOAPAction::getCost() {
	return this->cost;
}

AActor* UGOAPAction::getTarget() {
	return target;
}

GOAPWorldState UGOAPAction::getPreconditions() {
	return wsPreconditions;
}

GOAPWorldState UGOAPAction::getEffects() {
	return wsEffects;
}

// SETS

void UGOAPAction::setName(FString n) {
	this->name = n;
}

void UGOAPAction::setCost(float c) {
	cost = c;
}

void UGOAPAction::setTarget(AActor* t) {
	target = t;
}

void UGOAPAction::setPreconditions(GOAPWorldState pre) {
	wsPreconditions = pre;
}

void UGOAPAction::setEffects(GOAPWorldState ef) {
	wsEffects = ef;
}
