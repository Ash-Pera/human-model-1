#pragma once
#include "Types.h"

class Human;

class Bladder {
	const Human* human;
	Mass water;
	Mass waste;
public:
	Bladder(Human* human);
	Bladder();
	~Bladder();
};

