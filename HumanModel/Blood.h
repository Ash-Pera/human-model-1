#pragma once
#include "Types.h"

class Human;

class Blood {
private:
	const Human* human;
	Mass dissolved_CO2;
	Mass dissolved_O2;
	Mass dissolved_glucose;
	Mass dissolved_water;
	Mass dissolved_waste;
public:
	Blood(Human* human);
	Blood();
	~Blood();
};