#include "pch.h"
#include "Tissue.h"
#include "Human.h"




Tissue::Tissue(Human* human) {
	this->human = human;
}


Tissue::Tissue() {
	this->human = NULL;
}

Tissue::~Tissue()
{
}
