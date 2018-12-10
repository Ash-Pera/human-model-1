#include "pch.h"
#include "Intestines.h"
#include "Human.h"


Intestines::Intestines(Human* human) {
	this->human = human;
}


Intestines::Intestines() {
	this->human = NULL;
}

Intestines::~Intestines()
{
}
