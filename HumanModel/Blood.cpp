#include "pch.h"
#include "Blood.h"
#include "Human.h"


Blood::Blood(Human* human) {
	this->human = human;
}

Blood::Blood() {
	this->human = NULL;
}


Blood::~Blood()
{
}
