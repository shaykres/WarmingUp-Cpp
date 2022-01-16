#include "Gardener.h"

Gardener::Gardener(std::string name) :Person(name)
{
}

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> order)
{
	std::cout << "Gardener " << getName() << " prepares flowers." << std::endl;
	FlowersBouquet* flowersB = new FlowersBouquet(order, false);
	return flowersB;
}