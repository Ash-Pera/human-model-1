#pragma once

class Human;

class Blood {
private:
	Human* human;
public:
	Blood(Human* human);
	Blood();
	~Blood();
};