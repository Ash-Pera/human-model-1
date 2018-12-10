#pragma once

class Human;
class Organ {
public:
	const Human* human;
	Organ();
	Organ(Human* human);
	~Organ();
};

