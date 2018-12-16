#include "pch.h"
#include "Tissue.h"
#include "Human.h"

#include <iostream>

void Tissue::printHumanName() {
	std::cout << this->human->name;
}

///returns amount of heat generated
Energy Tissue::respire(Energy required_work)
{
	Energy total_energy = required_work / this->RESPIRATION_EFFICIENCY;
	Mass required_oxygen = 0.06666*total_energy;
	Mass required_sugar = 0.06475*total_energy;

	if (this->human->blood.pull_glucose(required_sugar) && this->human->blood.pull_O2(required_oxygen)) {
		//respiration was succsessful
		this->human->blood.push_CO2(0.09168*total_energy);
		this->human->blood.push_water(0.03753*total_energy);
		return total_energy - required_work; // total - work = heat
	} else {
		//respiration was not succsessful
		this->human->kill();
		return 0;
	}
}

/* 0.06475g sugar + 0.06666g oxygen -> 0.09168g carbon dioxide + 0.03753g water + 1kJ
 */
