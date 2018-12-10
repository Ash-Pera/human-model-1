#include "pch.h"
#include "Lungs.h"
#include "Human.h"
#include "PhysicalProperties.h"


//p = nrt/v
//p = mrt/Mv
Pressure Lungs::partial_pressue_CO2() {
	return prop::Calc_Pressure(this->mass_CO2 / prop::molar_mass_CO2, this->temp, this->volume);
}

Pressure Lungs::partial_pressue_O2() {
	return prop::Calc_Pressure(this->mass_O2 / prop::molar_mass_O2, this->temp, this->volume);
}
