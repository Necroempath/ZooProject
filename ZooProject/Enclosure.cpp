#include "Enclosure.h"

enum EnclosureType
{
	SAVANNA,
	TROPICS,
	RAINFOREST,
	DESERT,
	WETLANDS,
	UNKNOWN
};

Enclosure::Enclosure() : _caretaker(ZooWorker()), _type(UNKNOWN), _animalCount(0), _animals() {};

Enclosure::Enclosure(ZooWorker caretaker, EnclosureType type) : _caretaker(caretaker), _type(type), _animalCount(0), _animals() {};

const ZooWorker Enclosure::GetWorker() const { return _caretaker; }

const EnclosureType Enclosure::GetType() const { return _type; }

const Animal* Enclosure::GetAnimals() const { return _animals; }

const short Enclosure::GetAnimalsCount() const { return _animalCount; }

void Enclosure::SetWorker(const ZooWorker& caretaker) { _caretaker = caretaker; }

bool Enclosure::AddAnimal(Animal animal) 
{ 
	if (_animalCount < MAX_ANIMALS) {
		_animals[_animalCount++] = animal;
		return 1;
	}

	return 0;
}

bool Enclosure::RemoveAnimal(short index)
{
	if (index < 0 || index >= _animalCount) return 0;

	_animals[index] = Animal();

	for (short i = index; i < _animalCount; i++)
	{
		_animals[i] = _animals[i + 1];
	}

	_animalCount--;
	return 1;
}