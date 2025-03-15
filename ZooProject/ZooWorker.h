#pragma once

class ZooWorker
{
	char _name[30];
	short _experience;

public:
	ZooWorker();

	explicit ZooWorker(const char* name, const short experience);

	ZooWorker(const ZooWorker& other);

	ZooWorker(ZooWorker&& other) noexcept;

	ZooWorker& operator=(const ZooWorker& other);

	ZooWorker& operator=(ZooWorker&& other) noexcept;

	const char* GetName() const;

	const short GetExp() const;

	bool SetName(const char* name);
};

