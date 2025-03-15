#pragma once
#include "Enclosure.h"

class Zoo
{
	Enclosure _enclosures[5];
	short _enclosureCount;

	Enclosure();

	explicit Zoo(const Enclosure* enclosures, const short enclosureCount);
};

