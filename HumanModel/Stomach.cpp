#include "pch.h"
#include "Stomach.h"
#include "Human.h"


Stomach::Stomach(Human* human) {
	this->human = human;
}


Stomach::Stomach() {
	this->human = NULL;
}

Stomach::~Stomach()
{
}
