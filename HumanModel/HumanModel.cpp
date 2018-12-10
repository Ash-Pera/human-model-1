// HumanModel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Human.h"


int main()
{
	Human ash = Human("ash");

	ash.tissue.printHumanName();

    std::cout << "Hello World!\n"; 
}

