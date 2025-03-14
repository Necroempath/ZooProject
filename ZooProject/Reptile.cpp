#include "Reptile.h"

Reptile::Reptile(const char* name, const short age, const float weight, const bool isVenomous) : Animal(name, age, weight), _isVenomous(isVenomous) {};
