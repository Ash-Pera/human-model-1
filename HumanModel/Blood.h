#pragma once
#include "Types.h"
#include "Organ.h"

class Human;

class Blood: Organ {
private:
	Mass max_amount_of_O2;
	Volume amount_of_blood;
	Mass dissolved_CO2;
	Mass dissolved_O2;
	Mass dissolved_glucose;
	Mass dissolved_water;
	Mass dissolved_waste;
public:
	Blood() : Organ(), amount_of_blood(0), max_amount_of_O2(0) {};
	Blood(Human* human, Volume amount) : Organ(human),
										 amount_of_blood(amount),
										 max_amount_of_O2(amount * MAX_OXYGEN_CONCENTRATION){};

	double CO2_concentration();
	double O2_concentration();
	double glucose_concentration();
	double water_concentration();
	double waste_concentration();



	/* if CO2_concentration > dies
	 * if waste_concentration > dies
	*/



	/* https://www.ncbi.nlm.nih.gov/pmc/articles/PMC4666443/
	 * 20 mL oxygen per 100 mL
	 * 28.58 mg O2 per 100 mL of blood */

	// grams per liter
	static constexpr double MAX_OXYGEN_CONCENTRATION = 0.2858;


	/* https://www.ncbi.nlm.nih.gov/pmc/articles/PMC5380556/
	 * 0.055 to 0.085 atm blood produces (severe) symptoms
	 * 14.1% to 26% environs -> death
	 */
	static constexpr double FATAL_CO2_CONCENTRATION = 0.20;
};