#pragma once
#include "Types.h"
#include "Organ.h"

class Human;

class Lungs: Organ {
	Mass CO2;
	Mass O2;
public:
	Lungs() : Organ() {};
	Lungs(Human* human) : Organ(human) {};
};

