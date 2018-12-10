#pragma once
#include "Types.h"

class Human;

class Lungs {
	const Human* human;
	Mass CO2;
	Mass O2;
public:
	Lungs(Human* human);
	Lungs();
	~Lungs();
};

