#include "pch.h"
#include "Colon.h"
#include "Human.h"


Colon::Colon(Human* human) {
	this->human = human;
}


Colon::Colon() {
	this->human = NULL;
}

Colon::~Colon() {
}
