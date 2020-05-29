/**
	GOAP: Goal-Oriented Action Planning.

	GNU Lesser General Public License v3.0

	Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.
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

GOAPNode GOAPPlanner::lowestFinList(std::list<GOAPNode> opList) {
	GOAPNode n;
	std::list<GOAPNode>::iterator it = opList.begin();
	n = *it;
	int minF = it->getF();
	for (int i = 0; i < opList.size(); ++i) {
		if ((it->getF()) < minF) {
			n = *it;
			minF = it->getF();
		}
		++it;
	}

	return n;
}

bool containsNodeOpen(GOAPNode nod, std::list<GOAPNode> lista) {
	bool contiene = false;
	for (GOAPNode &n : lista) {
		if (n == nod) {
			contiene = true;
			break;
		}
	}
	return contiene;
}

bool containsNode(GOAPNode node, std::vector<GOAPNode> list) {
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

		if (current.getWorld().isIncluded(vActions[i]->getPreconditions())) {

			if (current.getAction() != vActions[i]) {

				if (vActions[i]->checkProceduralPrecondition(p)) {

					world = current.getWorld();
					world.joinWorldState(vActions[i]->getEffects());
					adjacent.setWorld(world);
					adjacent.setAction(vActions[i]);
					adjacentNodes.push_back(adjacent);

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

	openList.clear();
	closedList.clear();
	openList.push_back(start);
	bool continues = true;

	// Search and create the cheapest path between actions having into account their preconditions, effects and cost.
	while (continues) {

		GOAPNode current = lowestFinList(openList);
		openList.remove(current);
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
				openList.push_back(adjacent);
			}
			// If current path to adjacent node is cheaper than the previous one, the path changes. 
			else if (adjacent.getG() > adjacent.getG() + current.getG()) {

				adjacent.setParent(pos);
				adjacent.setG(current);
			}
		}

		// If open list is empty, the plan stops.
		if (openList.size() == 0)
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