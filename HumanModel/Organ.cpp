#include "pch.h"
#include "Organ.h"
#include "Human.h"


Organ::Organ() {
	this->human = NULL;
}

Organ::Organ(Human* human) {
	this->human = human;
}


Organ::~Organ() {
}
