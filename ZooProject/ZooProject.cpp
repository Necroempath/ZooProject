#include "Animal.h"
#include "Enclosure.cpp"
#include "EnclosureType.cpp"
#include <iostream>

void PrintInfo(Animal animal)
{
    std::cout << "Name:\t" << animal.GetName() << "\n";
    std::cout << "Age:\t" << animal.GetAge() << "\n";
    std::cout << "Weight:\t" << animal.GetWeight() << "\n";
}

int main()
{
	Animal animal1("aaa", 11, 8.5);
	Animal animal2("cac", 6, 20);
	Animal animal3("abb", 50, 4.7);
	Enclosure enc;
	enc.AddAnimal(animal1);
	enc.AddAnimal(animal2);
	enc.AddAnimal(animal3);
	for (size_t i = 0; i < 3; i++)
	{
		std::cout<<enc.GetAnimals()[i].GetName()<<"\t"<< enc.GetAnimals()[i].GetAge() << "\t" << enc.GetAnimals()[i].GetWeight();

	}
   // PrintInfo(animal);
}

