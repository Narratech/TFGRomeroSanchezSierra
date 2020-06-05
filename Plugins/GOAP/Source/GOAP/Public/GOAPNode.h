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

#include "GOAPAction.h"
#include "CoreMinimal.h"

/**
 * Node used in A* pathfinding algorithm. Represents a possible state of the world.
 */
class GOAP_API GOAPNode
{
private:

	GOAPWorldState world;

	int h;

	int g;

	int parent;

	// Chosen action to reach this node.
	UGOAPAction* action;

public:
	GOAPNode();

	GOAPNode(UGOAPAction* a);

	//OPERATORS 
	bool operator==(GOAPNode n);

	// GETS

	int getH();

	float getG();

	float getF();

	int getParent();

	GOAPWorldState getWorld();

	UGOAPAction* getAction();

	// SETS

	void setH(int value);

	void setH(GOAPWorldState w);

	void setG(GOAPNode p);

	void setParent(int p);

	void setWorld(GOAPWorldState w);

	void setAction(UGOAPAction* a);
};
