#pragma once

class Human;
class Organ {
public:
	Human* human;
	Organ();
	Organ(Human* human);
	~Organ();
};

