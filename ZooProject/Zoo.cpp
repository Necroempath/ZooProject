#include "Zoo.h"

Zoo::Zoo() : _enclosures(), _enclosureCount(0) {};

bool Zoo::AddEnclosure(const Enclosure& enclosure)
{
	if (_enclosureCount < MAX_ENCLOSURES) {
		_enclosures[_enclosureCount++] = enclosure;
		return 1;
	}

		return 0;
}

bool Zoo::RemoveEnclosure(const short index)
{
	if (index < 0 && index >= _enclosureCount) return 0;

	_enclosures[index] = Enclosure();

	for (short i = index; i < _enclosureCount - 1; i++)
	{
		_enclosures[i] = _enclosures[i + 1];
	}

	_enclosureCount--;
	return 1;
}

short Zoo::GetCount() const
{
	return _enclosureCount;
}
