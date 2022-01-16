#include "Wholesaler.h"


Wholesaler::Wholesaler(std::string name, Grower* g):Person(name)
{
	grower=g;
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> order)
{
	std::cout << "Wholesaler " << getName() << " forwards the request to Grower " << grower->getName() << "." << std::endl;
	FlowersBouquet* flowersB = grower->prepareOrder(order);
	std::cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << getName() << "." << std::endl;
	return flowersB; 
}


