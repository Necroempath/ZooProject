#include "Mammal.h"

//Mammal::Mammal() : _name("Unknown"), _age(0), _weight(0) {};

Mammal::Mammal(const char* name, const short age, const float weight, const bool hasFure) : Animal(name, age, weight), _hasFure(false) {};


