#include "pch.h"
#include "Lungs.h"


Lungs::Lungs(Human* human) {
	this->human = human;
}


Lungs::Lungs() {
	this->human = NULL;
}

Lungs::~Lungs()
{
}
