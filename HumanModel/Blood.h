#pragma once
#include "Types.h"
#include "Organ.h"

class Human;

class Blood: Organ {
private:
	Volume amount_of_blood;
	Mass dissolved_CO2;
	Mass dissolved_O2;
	Mass dissolved_glucose;
	Mass dissolved_water;
	Mass dissolved_waste;
public:
	Blood() : Organ(), amount_of_blood(0) {};
	Blood(Human* human, Volume amount) : Organ(human), amount_of_blood(amount){};

	double CO2_concentration();
	double O2_concentration();
	double glucose_concentration();
	double water_concentration();
	double waste_concentration();


	/* if CO2_concentration > dies
	 * if waste_concentration > dies
	*/
};