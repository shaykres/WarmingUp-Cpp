#include "Grower.h"
#include "Person.h"

Grower::Grower(std::string name, Gardener* g) :Person(name)
{
	gardener = g;
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> order)
{
	std::cout << "Grower " << getName() << " forwards the request to Gardener " << gardener->getName() << "." << std::endl;
	FlowersBouquet* flowersB = gardener->prepareBouquet(order);
	std::cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << getName()<< "." << std::endl;

	return flowersB;
}