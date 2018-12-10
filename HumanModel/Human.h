#pragma once
#include "Bladder.h"
#include "Blood.h"
#include "Colon.h"
#include "Intestines.h"
#include "Lungs.h"
#include "Stomach.h"
#include "Tissue.h"
#include <string>

class Human {
public:
	/*Bladder bladder;
	Blood blood;
	Colon colon;
	Intestines intestsines;
	Lungs lungs;
	Stomach stomach;*/
	Tissue tissue;
	std::string name;

	Human(std::string name);
	~Human();
};

