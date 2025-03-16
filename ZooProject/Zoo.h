#pragma once
#include "Enclosure.h"
#define MAX_ENCLOSURES 5

class Zoo
{
	Enclosure _enclosures[MAX_ENCLOSURES];
	short _enclosureCount;

public:
	Zoo();

	bool AddEnclosure(const Enclosure& enclosure);

	bool RemoveEnclosure(const short index);

	const Enclosure* GetEnclosures() const;

	short GetCount() const;
};

