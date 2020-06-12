/**
	GOAP NPC: Goal-Oriented Action Planning for Non-Player Characters.

	Publishers/Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.

	Published on 2020.
 */
#pragma once

#include <vector>
#include "GOAPWorldState.h"
#include "GOAPNode.h"
#include "GOAPAction.h"
#include "CoreMinimal.h"


/**
 * Uses A* pathfinding algorithm to generate the cheapest actions plan. 
 * Nodes are represented by the possible states of the world and edges are represented by actions.
 */
class GOAP_API GOAPPlanner
{
private:

	GOAPWorldState* currentWorld;

	GOAPWorldState* goal;

	std::vector<UGOAPAction*> actions;

	TArray<GOAPNode> openList;

	std::vector<GOAPNode> closedList;

public:

	GOAPPlanner();

	~GOAPPlanner();

	GOAPPlanner(GOAPWorldState* c, GOAPWorldState* g, std::vector<UGOAPAction*> a);

	// Get the node with lowest F's value. F = G + H.
	GOAPNode lowestFinList(TArray<GOAPNode> openList);

	// Returns the nodes adjacent to the current one.
	std::vector<GOAPNode> getAdjacent(GOAPNode current, std::vector<UGOAPAction*> vActions, APawn* p);

	// A* pathfinding algorithm.
	TArray<UGOAPAction*> generatePlan(APawn* p);

	void addAction(UGOAPAction* a);

	//GETS

	GOAPWorldState getGoal();

	GOAPWorldState getCurrentWorld();

	//SETS

	void setGoal(GOAPWorldState* g);

	void setCurrentWorld(GOAPWorldState* w);

};
