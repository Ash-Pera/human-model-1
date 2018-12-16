#include "pch.h"
#include "Blood.h"
#include "Human.h"

double Blood::CO2_concentration()
{
	return this->dissolved_CO2 / this->amount_of_blood;
}

double Blood::O2_concentration()
{
	return this->dissolved_O2 / this->amount_of_blood;
}

double Blood::glucose_concentration()
{
	return this->dissolved_glucose / this->amount_of_blood;
}

double Blood::water_concentration()
{
	return this->dissolved_water / this->amount_of_blood;
}

double Blood::waste_concentration()
{
	return this->dissolved_waste / this->amount_of_blood;
}

bool Blood::pull_glucose(Mass mass_glucose)
{
	if (this->dissolved_glucose >= mass_glucose) {
		this->dissolved_glucose -= mass_glucose;
		return true;
	} else {
		return false;
	}
}

bool Blood::pull_O2(Mass mass_O2)
{
	if (this->dissolved_O2 >= mass_O2) {
		this->dissolved_O2 -= mass_O2;
		return true;
	}
	else {
		return false;
	}
}
