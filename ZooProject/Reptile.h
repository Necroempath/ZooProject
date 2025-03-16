#pragma once
#include "Animal.h"

class Reptile : public Animal
{
	bool _isVenomous;

public:
	explicit Reptile(const char* name, const short age, const float weight, const bool isVenomous);
};

