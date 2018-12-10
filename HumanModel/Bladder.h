#pragma once
#include "human.h"

class Human;

class Bladder {
	Human* human;
public:
	Bladder(Human* human);
	Bladder();
	~Bladder();
};

