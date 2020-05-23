// Fill out your copyright notice in the Description page of Project Settings.

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
class GOAPPlanner
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

	std::vector<UGOAPAction*> generatePlan(APawn* p);

	void addAction(UGOAPAction* a);

	//GETS

	GOAPWorldState getGoal();

	GOAPWorldState getCurrentWorld();

	//SETS

	void setGoal(GOAPWorldState* g);

	void setCurrentWorld(GOAPWorldState* w);
};
