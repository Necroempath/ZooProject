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