#pragma once
#include "Types.h"
#include "Organ.h"

class Human;

class Blood: Organ {
private:
	Mass dissolved_CO2;
	Mass dissolved_O2;
	Mass dissolved_glucose;
	Mass dissolved_water;
	Mass dissolved_waste;
public:
	Blood() : Organ() {};
	Blood(Human* human) : Organ(human) {};

	/* if dissolved_CO2 >
	 * id dissolved_waste >
	*/
};