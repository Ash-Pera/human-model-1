#include "pch.h"
#include "Tissue.h"
#include "Human.h"

#include <iostream>

void Tissue::printHumanName() {
	std::cout << this->human->name;
}
