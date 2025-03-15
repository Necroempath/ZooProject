#define _CRT_SECURE_NO_WARNINGS
#include "ZooWorker.h"
#include <string.h>

ZooWorker::ZooWorker() : _name("Unknown"), _experience(0) {};

ZooWorker::ZooWorker(const char* name, const short experience)
{
	if (strlen(name) > 0) strncpy(_name, name, sizeof(_name));
	else strncpy(_name, "Unknown", sizeof(_name));

	_experience = experience > 0 ? experience : 0;
}

ZooWorker::ZooWorker(const ZooWorker& other)
{
	strncpy(_name, other._name, sizeof(_name));
	_experience = other._experience;
}

ZooWorker::ZooWorker(ZooWorker&& other) noexcept
{
	strncpy(_name, other._name, sizeof(_name));
	_experience = other._experience;

	strncpy(other._name, "Unknown", sizeof(other._name));
	other._experience = 0;
}

ZooWorker& ZooWorker::operator=(const ZooWorker& other)
{
	if (this == &other) return *this;

	strncpy(_name, other._name, sizeof(_name));
	_experience = other._experience;

	return *this;
}

ZooWorker& ZooWorker::operator=(ZooWorker&& other) noexcept
{
	if (this == &other) return *this;

	strncpy(_name, other._name, sizeof(_name));
	_experience = other._experience;

	strncpy(other._name, "Unknown", sizeof(other._name));
	other._experience = 0;

	return *this;
}

const char* ZooWorker::GetName() const { return _name; }

const short ZooWorker::GetExp() const { return _experience; }

bool ZooWorker::SetName(const char* name)
{
	if (strlen(name) > 0) {
		strncpy(_name, name, sizeof(_name));
		return 1;
	}

	return 0;
	
}