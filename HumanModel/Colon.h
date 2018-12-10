#pragma once
#include "Types.h"
#include "Organ.h"

class Human;

class Colon: Organ {
	Mass poo;
	Mass water;
public:
	Colon() : Organ() {};
	Colon(Human* human) : Organ(human) {};
};

