#pragma once
#include "Animal.h"

class Bird : public Animal
{
	float _wingSwang;

public:
	explicit Bird(const char* name, const short age, const float weight, const float wingSwang);
};

