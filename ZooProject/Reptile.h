#pragma once
#include "Animal.h"

class Reptile : Animal
{
	bool _isVenomous;

	explicit Reptile(const char* name, const short age, const float weight, const bool isVenomous);
};

