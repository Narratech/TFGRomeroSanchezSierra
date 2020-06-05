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

#include "map"
#include "CoreMinimal.h"

/**
 * WorldState is made up of atoms that define the state of a world.
 * 
 */
class GOAP_API GOAPWorldState
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

	// Mixes two WorldState.
	void joinWorldState(GOAPWorldState w);

	bool isEmpty();
};
