#pragma once
#include "Types.h"
#include "Organ.h"


/* C6H12O6 (s) + 6 O2 (g) -> 6 CO2 (g) + 6 H2O (l) + heat
 * delta_G = -2880 kJ per mol C6H12O6
 *
 * 186.49g sugar + 191.99g oxygen -> 264.05g carbon dioxide + 108.09g water + 2880kJ
 * 1g sugar + 1.0657g oxygen -> 1.4657g carbon dioxide + 0.6000g water + 15.986kJ
 * 0.06475g sugar + 0.06666g oxygen -> 0.09168g carbon dioxide + 0.03753g water + 1kJ
 */


class Human;
class Tissue: Organ{
	Mass fat;
public:
	Tissue() : Organ() {};
	Tissue(Human* human) : Organ(human) {};
	void printHumanName();
	///returns amount of heat generated 
	Energy respire(Energy required_work);



	static constexpr double RESPIRATION_EFFICIENCY = 0.40;
};



