#pragma once
#include "Animal.h"

class Mammal :public Animal
{
	bool _hasFure;

public:
	explicit Mammal(const char* name, const short age, const float weight, const bool hasFure);
};

