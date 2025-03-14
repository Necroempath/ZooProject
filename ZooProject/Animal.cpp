#define _CRT_SECURE_NO_WARNINGS
#include "Animal.h"
#include <string.h>

Animal::Animal() : _name("Unknown"), _age(0), _weight(0) {};

Animal::Animal(const char* name, const short age, const float weight)
{
	if (strlen(name) > 0) strncpy(_name, name, sizeof(_name));
	else strncpy(_name, "Unknown", sizeof(_name));

	_age = age > 0 ? age : 0;

	_weight = weight > 0 ? weight : 0;
}

Animal::Animal(const Animal& other)
{
	strncpy(_name, other._name, sizeof(_name));
	_age = other._age;
	_weight = other._weight;
}

Animal::Animal(Animal&& other) noexcept
{
	strncpy(_name, other._name, sizeof(_name));
	_age = other._age;
	_weight = other._weight;
}

Animal& Animal::operator=(const Animal& other)
{
	strncpy(_name, other._name, sizeof(_name));
	_age = other._age;
	_weight = other._weight;

	return *this;
}

Animal& Animal::operator=(Animal&& other) noexcept
{
	strncpy(_name, other._name, sizeof(_name));
	_age = other._age;
	_weight = other._weight;
	
	strncpy(other._name, "Unknown", sizeof(other._name));
	other._age = 0;
	other._weight = 0;

	return *this;
}

const char* Animal::GetName() const { return _name; }

const short Animal::GetAge() const { return _age; }

const float Animal::GetWeight() const { return _weight; }

bool Animal::SetName(const char* name)
{
	if (strlen(name) > 0) {
		strncpy(_name, name, sizeof(_name));
		return 1;
	}

	return 0;
}

bool Animal::SetWeight(const short weight)
{
	if (weight > 0) {
		_weight = weight;
		return 1;
	}

	return 0;
}