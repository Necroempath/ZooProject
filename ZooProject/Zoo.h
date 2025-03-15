#pragma once
#include "Enclosure.h"

class Zoo
{
	Enclosure _enclosures[5];
	short _enclosureCount;

	Zoo();

	explicit Zoo(const Enclosure* enclosures, const short enclosureCount);
};

