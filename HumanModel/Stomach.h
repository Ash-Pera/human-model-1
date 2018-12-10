#pragma once
#include "Types.h"

class Human;

class Stomach {
	const Human* human;
	Mass food;
	Mass water;
public:
	Stomach(Human* human);
	Stomach();
	~Stomach();
};

