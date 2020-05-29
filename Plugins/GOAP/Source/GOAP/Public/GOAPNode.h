/**
	GOAP: Goal-Oriented Action Planning.

	GNU Lesser General Public License v3.0

	Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.
 */
#pragma once

#include "GOAPAction.h"
#include "CoreMinimal.h"

/**
 * 
 */
class GOAP_API GOAPNode
{
private:

	GOAPWorldState world;

	int h;

	int g;

	int parent;

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
