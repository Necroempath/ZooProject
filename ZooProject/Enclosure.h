#pragma once
#include "ZooWorker.h"
#include "Animal.h"
#define MAX_ANIMALS 10

enum EnclosureType
{
	SAVANNA,
	TROPICS,
	RAINFOREST,
	DESERT,
	WETLANDS,
	UNKNOWN
};

class Enclosure
{
	ZooWorker _caretaker;
	EnclosureType _type;
	Animal _animals[MAX_ANIMALS];
	short _animalCount;

public:
	Enclosure();

	explicit Enclosure(ZooWorker caretaker, EnclosureType type);

	Enclosure(const Enclosure& other);

	Enclosure(Enclosure&& other) noexcept;

	Enclosure& operator=(const Enclosure& other);

	Enclosure& operator=(Enclosure&& other) noexcept;

	const ZooWorker GetWorker() const;

	const EnclosureType GetType() const;

	const Animal* GetAnimals() const;

	const short GetAnimalsCount() const;

	void SetWorker(const ZooWorker& caretaker);

	bool AddAnimal(const Animal& animal);

	bool RemoveAnimal(short index);
};

