#include "pch.h"
#include "Tissue.h"
#include "Human.h"



/* C6H12O6 (s) + 6 O2 (g) -> 6 CO2 (g) + 6 H2O (l) + heat
 * delta_G = -2880 kJ per mol C6H12O6
 *
 * 186.49g sugar + 191.99g oxygen -> 264.05g carbon dioxide + 108.09g water + 2880kJ
 * 1g sugar + 1.0657g oxygen -> 1.4657g carbon dioxide + 0.6000g water + 15.986kJ
 */

Tissue::Tissue(Human* human) {
	this->human = human;
}


Tissue::Tissue() {
	this->human = NULL;
}

Tissue::~Tissue()
{
}