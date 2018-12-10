#pragma once
#include "Types.h"
#include "Organ.h"

class Human;

class Intestines: Organ{
	Mass food;
	Mass water;
public:
	Intestines() : Organ() {};
	Intestines(Human* human) : Organ(human) {};
};
