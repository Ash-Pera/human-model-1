#pragma once
#include "Types.h"

class Human;
class Tissue {
	const Human* human;
	Mass fat;
public:
	Tissue(Human* human);
	Tissue();
	~Tissue();
};



