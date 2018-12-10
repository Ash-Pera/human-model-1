#pragma once
#include "Types.h"

namespace prop {
	//grams per mol
	double const molar_mass_O2 = 31.988;
	double const molar_mass_CO2 = 44.009;
	double const molar_mass_glucose = 180.16;
	double const molar_mass_water = 18.015;

	//L kPa K-1 mol-1
	double const gas_constant_r = 8.314459848;


	//pv = nrt
	Pressure Calc_Pressure(double n, Temperature t, Volume v) {
		return Pressure(n * gas_constant_r * t / v);
	}
}