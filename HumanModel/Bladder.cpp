#include "pch.h"
#include "Bladder.h"
#include "Human.h"

Bladder::Bladder(Human* human) {
	this->human = human;
}

Bladder::Bladder() {
	this->human = NULL;
}


Bladder::~Bladder() {
}
