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
#include <list>
#include "GOAPWorldState.h"
#include "GOAPNode.h"
#include "GOAPAction.h"
#include "CoreMinimal.h"


/**
 * 
 */
class GOAP_API GOAPPlanner
{
private:

	GOAPWorldState* currentWorld;

	GOAPWorldState* goal;

	std::vector<UGOAPAction*> actions;

	std::list<GOAPNode> openList;

	std::vector<GOAPNode> closedList;

public:

	GOAPPlanner();

	~GOAPPlanner();

	GOAPPlanner(GOAPWorldState* c, GOAPWorldState* g, std::vector<UGOAPAction*> a);

	GOAPNode lowestFinList(std::list<GOAPNode> openList);

	std::vector<GOAPNode> getAdjacent(GOAPNode current, std::vector<UGOAPAction*> vActions, APawn* p);

	TArray<UGOAPAction*> generatePlan(APawn* p);

	void addAction(UGOAPAction* a);

	//GETS

	GOAPWorldState getGoal();

	GOAPWorldState getCurrentWorld();

	//SETS

	void setGoal(GOAPWorldState* g);

	void setCurrentWorld(GOAPWorldState* w);

};
