#include "pch.h"
#include "Human.h"
#include "Human.h"


Human::Human(std::string name) {
	this->name = name;
	/*this->bladder = Bladder(this);
	this->blood = Blood(this);
	this->colon = Colon(this);
	this->intestsines = Intestines(this);
	this->lungs = Lungs(this);
	this->stomach = Stomach(this);*/
	this->tissue = Tissue(this);
}


Human::~Human() {

}
