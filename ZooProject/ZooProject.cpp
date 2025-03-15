#include "Animal.h"
#include "Enclosure.h"
#include <iostream>
#include "Zoo.h"

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

void PrintInfo(const Animal& animal)
{
    std::cout << "Name:\t" << animal.GetName() << "\n";
    std::cout << "Age:\t" << animal.GetAge() << "\n";
    std::cout << "Weight:\t" << animal.GetWeight() << "\n";
}

void PrintEnclosureInfo(const Enclosure& enclosure)
{
	std::cout << "Enclosure type:\t\t" << GetEnclsureType(enclosure.GetType()) << "\n";
	std::cout << "Animal count:\t\t" << enclosure.GetAnimalsCount() << "\n";
	std::cout << "Caretaker:\t\t" << enclosure.GetWorker().GetName() << "\n";
}

void PrintZooInfo(const Zoo& zoo)
{
	for (size_t i = 0; i < zoo.GetCount(); i++)
	{
		std::cout << "\n-----------ENCLOSURE " << i + 1 << "-----------\n";
		PrintEnclosureInfo(zoo[i]);

	}
}

int main()
{
	Animal cat("Sweety", 4, 12.5);
	Animal rat("Tricky", 3, 5);
	/*Bird raven()*/
	Animal animal1("aaa", 11, 8.5);
	Animal animal2("cac", 6, 20);
	Animal animal3("abb", 50, 4.7);
	ZooWorker worker("Abdull", 21);
	Enclosure enc(worker, TROPICS);
	Zoo zoo;
	zoo.AddEnclosure(enc);
	
	//PrintEnclosureInfo(enc);
	enc.AddAnimal(animal1);
	enc.AddAnimal(animal2);
	enc.AddAnimal(animal3);
	zoo.AddEnclosure(enc);
	PrintZooInfo(zoo);
	//for (size_t i = 0; i < 3; i++)
	//{
	//	std::cout<<enc.GetAnimals()[i].GetName()<<"\t"<< enc.GetAnimals()[i].GetAge() << "\t" << enc.GetAnimals()[i].GetWeight();

	//}
	//enc.RemoveAnimal(0);
	//enc.RemoveAnimal(0);
	//enc.AddAnimal(animal1);
	//enc.AddAnimal(animal1);
	//enc.AddAnimal(animal1);
	//enc.RemoveAnimal(3);
	//for (size_t i = 0; i < enc.GetAnimalsCount(); i++)
	//{
	//	std::cout<<enc.GetAnimals()[i].GetName() << "\n";
	//}

}

