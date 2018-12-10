#pragma once
#include "Types.h"
#include "Organ.h"

class Human;

class Lungs: Organ {
	Temperature temp;
	Volume volume;
	Mass mass_CO2;
	Mass mass_O2;
public:
	Lungs() : Organ(), volume(0), temp(0) {};
	Lungs(Human* human, Volume volume) : Organ(human), volume(volume), temp(273) {};
	Pressure partial_pressue_CO2();
	Pressure partial_pressue_O2();
	Pressure total_pressue() {
		return partial_pressue_CO2() + partial_pressue_O2();
	};
};

