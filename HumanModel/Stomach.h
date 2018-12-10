#pragma once
#include "Types.h"
#include "Organ.h"

class Human;

class Stomach: Organ {
	Mass food;
	Mass water;
public:
	Stomach() : Organ() {};
	Stomach(Human* human) : Organ(human) {};
};

