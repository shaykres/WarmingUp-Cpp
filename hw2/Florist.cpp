#include "Florist.h"
#include <string>
#include "Person.h"


Florist::Florist(std::string name, Wholesaler* w, FlowerArranger* f, DeliveryPerson* d):Person(name)
{
	wholesaler = w;
	flowerArranger = f;
	deliveryPerson = d;
}

void Florist::acceptOrder(Person* person, std::vector<std::string> order)
{
	std::cout <<"Florist " << getName()<< " forwards request to Wholesaler "<< wholesaler->getName() << "." << std::endl;
	FlowersBouquet* flowersB = wholesaler->acceptOrder(order);
	std::cout << "Wholesaler " << wholesaler->getName() << " returns flowers to Florist " << getName() << "." << std::endl;
	std::cout << "Florist " << getName() << " request flowers arrrangement from Flower Arranger " << flowerArranger->getName() << "." << std::endl;
	flowerArranger->arrangeFlowers(flowersB);
	std::cout << "Flower Arranger " << flowerArranger->getName() << " returns arrange flowers to Florist " << getName() << "." << std::endl;
	std::cout << "Florist " << getName() << " forwards flowers to Delivery Person " << deliveryPerson ->getName() << "." << std::endl;
	deliveryPerson->deliver(person, flowersB);

}

