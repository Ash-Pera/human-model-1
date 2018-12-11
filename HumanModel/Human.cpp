#include "pch.h"
#include "Human.h"
#include "Human.h"


Human::Human(std::string name, Volume lung_volume, Volume blood_amount) {
	this->name = name;
	this->bladder = Bladder(this);
	this->blood = Blood(this, blood_amount);
	this->colon = Colon(this);
	this->intestsines = Intestines(this);
	this->lungs = Lungs(this, lung_volume);
	this->stomach = Stomach(this);
	this->tissue = Tissue(this);
}


Human::~Human() {

}
