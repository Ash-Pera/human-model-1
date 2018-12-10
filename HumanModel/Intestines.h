#pragma once
#include "Types.h"

class Human;

class Intestines {
	const Human* human;
	Mass food;
	Mass water;
public:
	Intestines(Human* human);
	Intestines();
	~Intestines();
};
