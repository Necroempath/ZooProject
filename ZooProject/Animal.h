#pragma once
class Animal
{
protected:
	char _name[20];
	short _age;
	float _weight;
		
public:
	Animal();

	explicit Animal(const char* name, const short age, const float weight);

	Animal(const Animal& other);

	Animal(Animal&& other) noexcept;

	Animal& operator=(const Animal& other);

	Animal& operator=(Animal&& other) noexcept;

	const char* GetName() const;

	const short GetAge() const;

	const float GetWeight() const;

	bool SetName(const char* name);

	bool SetWeight(const short weight);
};
