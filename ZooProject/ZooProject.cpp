#include "Animal.h"
#include "Enclosure.h"
#include <iostream>
#include "Zoo.h"
#include "Bird.h"
#include "Reptile.h"
#include "Mammal.h"

const char* GetEnclsureType(const EnclosureType type)
{
	switch (type)
	{
	case SAVANNA:
		return "Savanna";
		break;
	case TROPICS:
		return "Tropics";
		break;
	case RAINFOREST:
		return "Rainforest";
		break;
	case DESERT:
		return "Desert";
		break;
	case WETLANDS:
		return "Wetlands";
		break;
	default:
		return "Unknown";
		break;
	}
}

void PrinAnimaltInfo(const Animal& animal)
{
    std::cout << "\n\tName:\t" << animal.GetName() << "\n";
    std::cout << "\tAge:\t" << animal.GetAge() << "\n";
    std::cout << "\tWeight:\t" << animal.GetWeight() << "\n";
}

void PrintEnclosureInfo(const Enclosure& enclosure)
{
	std::cout << "\nEnclosure type:\t\t" << GetEnclsureType(enclosure.GetType()) << "\n";
	std::cout << "\nAnimal count:\t\t" << enclosure.GetAnimalsCount() << "\n";
	for (short i = 0; i < enclosure.GetAnimalsCount(); i++)
	{
		PrinAnimaltInfo(enclosure.GetAnimals()[i]);
	} 
	std::cout << "\nCaretaker:\t\t" << enclosure.GetWorker().GetName() << "\n";
}

void PrintZooInfo(const Zoo& zoo)
{
	for (short i = 0; i < zoo.GetCount(); i++)
	{
		std::cout << "\n-----------ENCLOSURE " << i + 1 << "-----------\n";
		PrintEnclosureInfo(zoo.GetEnclosures()[i]);

	}
}

int main()
{
	Mammal cat("Sweety", 4, 12.5, true);
	Mammal rat("Tricky", 3, 5, false);
	Bird raven("Spector", 35, 2, 2.5);
	Reptile python("Fear", 20, 20, true);

	ZooWorker worker("Abdull", 21);
	Enclosure enc(worker, TROPICS);
	enc.AddAnimal(cat);
	enc.AddAnimal(rat);
	enc.AddAnimal(raven);
	enc.AddAnimal(python);
	Zoo zoo;
	enc.RemoveAnimal(1);
	zoo.AddEnclosure(enc);
	PrintZooInfo(zoo);

}

