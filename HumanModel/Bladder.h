#pragma once
#include "Types.h"
#include "Organ.h"

class Human;

class Bladder: Organ{
	Mass water;
	Mass waste;
public:
	Bladder() : Organ() {};
	Bladder(Human* human) : Organ(human) {};
};

