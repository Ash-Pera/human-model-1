#pragma once
#include "Types.h"

class Human;

class Colon {
	const Human* human;
	Mass Poo;
	Mass water;
public:
	Colon(Human* human);
	Colon();
	~Colon();
};

