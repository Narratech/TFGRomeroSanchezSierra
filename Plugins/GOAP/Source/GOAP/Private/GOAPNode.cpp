/**
	GOAP NPC: Goal-Oriented Action Planning for Non-Player Characters.

	GNU Lesser General Public License v3.0

	Publishers/Authors:
		-	Diego Romero-Hombrebueno Santos.
		-	Mario Sanchez Blanco.
		-	Jose Manuel Sierra Ramos.

	Published on 2020.
 */
#include "GOAPNode.h"

GOAPNode::GOAPNode() {
	action = NULL;
	g = 0;
	h = 0;
}

GOAPNode::GOAPNode(UGOAPAction* a) {
	action = a;
	if (a != NULL)g = a->getCost();
	else g = 0;
	h = 0;
}

bool GOAPNode::operator==(GOAPNode n) {
	return action == n.getAction();
}


GOAPWorldState GOAPNode::getWorld() {
	return world;
}

int GOAPNode::getH() {
	return h;
}

float GOAPNode::getG() {
	return g;
}

float GOAPNode::getF() {
	return g + h;
}

int GOAPNode::getParent() {
	return parent;
}

UGOAPAction* GOAPNode::getAction() {
	return action;
}

void GOAPNode::setWorld(GOAPWorldState w) {
	this->world = w;
}

void GOAPNode::setH(int value) {
	this->h = value;
}

void GOAPNode::setH(GOAPWorldState w) {
	for (auto it : world.getAtoms()) {
		auto aux = w.getAtoms().find(it.first);
		if (aux != w.getAtoms().end()) {
			if (it.second != aux->second) ++h;
		}
		else ++h;
	}
}

void GOAPNode::setG(GOAPNode p) {
	this->g += p.getG();
}

void GOAPNode::setParent(int p) {
	this->parent = p;
}

void GOAPNode::setAction(UGOAPAction* a) {
	this->h = 0;
	this->g = a->getCost();
	this->action = a;
}