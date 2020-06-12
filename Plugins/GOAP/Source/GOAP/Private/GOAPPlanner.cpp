/**
	GOAP NPC: Goal-Oriented Action Planning for Non-Player Characters.

	Publishers/Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.

	Published on 2020.
 */
#include "GOAPPlanner.h"

GOAPPlanner::GOAPPlanner()
{
}

GOAPPlanner::~GOAPPlanner()
{
}

GOAPPlanner::GOAPPlanner(GOAPWorldState* c, GOAPWorldState* g, std::vector<UGOAPAction*> a)
{
	currentWorld = c;
	goal = g;
	actions = a;
}

GOAPNode GOAPPlanner::lowestFinList(TArray<GOAPNode> opList) {
	GOAPNode node;

	float minF = MAX_FLT;
	for (GOAPNode &n : opList) {
		if ((n.getF()) < minF) {
			node = n;
			minF = n.getF();
		}
	}

	return node;
}

bool containsNodeOpen(GOAPNode nod, TArray<GOAPNode> lista) {
	bool contiene = false;
	for (GOAPNode &n : lista) {
		if (n == nod) {
			contiene = true;
			break;
		}
	}
	return contiene;
}

bool containsNode(GOAPNode node, TArray<GOAPNode> list) {
	bool contains = false;
	for (GOAPNode &n : list) {
		if (n == node) {
			contains = true;
			break;
		}
	}
	return contains;
}

std::vector<GOAPNode> GOAPPlanner::getAdjacent(GOAPNode current, std::vector<UGOAPAction*> vActions, APawn* p) {

	std::vector<GOAPNode> adjacentNodes;
	GOAPNode adjacent;
	GOAPWorldState world;

	for (int i = 0; i < vActions.size(); ++i) {

		// Checks if the action can be performed from the current world.
		if (current.getWorld().isIncluded(vActions[i]->getPreconditions())) {

			// Checks if the action is the same as the current one. (This can be deleted if you want your AI to perform the same action consecutively).
			if (current.getAction() != vActions[i]) {

				// Checks the procedural precondition of the action.
				if (vActions[i]->checkProceduralPrecondition(p)) {

					world = current.getWorld(); // Saves the current world.
					world.joinWorldState(vActions[i]->getEffects()); // Applies effects of the action to the saved world.
					adjacent.setWorld(world); // Sets the adjacet node's world.
					adjacent.setAction(vActions[i]); // Sets the adjacet node's action. 
					adjacentNodes.push_back(adjacent); // Includes the adjacent node in the list.

				}
			}
		}
	}
	return adjacentNodes;
}

TArray<UGOAPAction*> GOAPPlanner::generatePlan(APawn* p) {

	TArray<UGOAPAction*> sol;

	GOAPNode start; start.setWorld(*currentWorld); start.setParent(-1);
	GOAPNode last;

	openList.Empty();
	closedList.clear();
	openList.Push(start);
	bool continues = true;

	// Search and create the cheapest path between actions having into account their preconditions, effects and cost.
	while (continues) {

		GOAPNode current = lowestFinList(openList);
		openList.Remove(current);
		closedList.push_back(current);
		int pos = closedList.size() - 1;

		// When the current plan reaches the goal, the plan stops.
		if (current.getWorld().isIncluded(*goal)) {

			last = current;
			continues = false;
			break;
		}

		// Get adjacents of actual node.
		std::vector<GOAPNode> adjacents = getAdjacent(current, actions, p);

		// Explore adjacent nodes.
		for (GOAPNode &adjacent : adjacents) {

			// If the adjacent node isn't in the open list, it is added.
			if (!containsNodeOpen(adjacent, openList)) {

				adjacent.setParent(pos);
				adjacent.setH(current.getWorld());
				adjacent.setG(current);
				openList.Push(adjacent);
			}
			// If current path to adjacent node is cheaper than the previous one, the path changes. 
			else if (adjacent.getG() > adjacent.getG() + current.getG()) {

				adjacent.setParent(pos);
				adjacent.setG(current);
			}
		}

		// If open list is empty, the plan stops.
		if (openList.Num() == 0)
			continues = false;

	}

	// Extracts the plan's path in reverse from closed list and copy it to a new variable.
	GOAPNode planNode = last;
	while (!(planNode == start)) {
		sol.Push(planNode.getAction());
		planNode = closedList[planNode.getParent()];
	}
	return sol;
}

void GOAPPlanner::addAction(UGOAPAction* a) {
	this->actions.push_back(a);
}

GOAPWorldState GOAPPlanner::getGoal() {
	return *goal;
}
void GOAPPlanner::setGoal(GOAPWorldState* g) {
	this->goal = g;
}
GOAPWorldState GOAPPlanner::getCurrentWorld() {
	return *currentWorld;
}
void GOAPPlanner::setCurrentWorld(GOAPWorldState* w) {
	this->currentWorld = w;
}