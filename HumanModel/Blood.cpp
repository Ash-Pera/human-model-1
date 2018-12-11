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
