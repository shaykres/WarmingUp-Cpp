#include "DeliveryPerson.h"


DeliveryPerson::DeliveryPerson(std::string name):Person(name)
{
}

void DeliveryPerson::deliver(Person* person, FlowersBouquet* flowerB)
{
	std::cout << "Delivery Person " << getName() << " delivers flowers to " << person->getName() << "." << std::endl;
	person->acceptFlowers(flowerB);
}
