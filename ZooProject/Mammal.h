#pragma once
#include "Animal.h"

class Mammal : Animal
{
	bool _hasFure;

public:
	//Mammal();

	explicit Mammal(const char* name, const short age, const float weight, const bool hasFure);
};

