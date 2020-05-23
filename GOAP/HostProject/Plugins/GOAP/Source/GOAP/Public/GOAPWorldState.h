// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "map"
#include "CoreMinimal.h"

/**
 * 
 */
class GOAPWorldState
{
private:

	std::map<FString, bool> atoms;

public:

	GOAPWorldState();

	~GOAPWorldState();

	GOAPWorldState(std::map<FString, bool> atoms);

	bool operator==(GOAPWorldState w);

	bool isIncluded(GOAPWorldState w);

	std::map<FString, bool> getAtoms();

	void setAtoms(std::map<FString, bool> atoms);

	void addAtom(FString name, bool value);

	void cleanAtoms();

	void joinWorldState(GOAPWorldState w);
};
