#include "Person.h"
#include "Florist.h"
#include <string>
#include <iostream>


Person::Person(std::string name) : name(name)
{}

std::string Person::getName()
{
	return name;
}

void Person::orderFlowers(Florist* florist, Person* person, std::vector<std::string> order)
{
	std::string myOrder = ToString(order);
	std::cout << getName() << " orders flowers to " << person->getName() << " from Florist " << florist->getName() << ": " << myOrder << std::endl;
	florist->acceptOrder(person, order);
}

void Person::acceptFlowers(FlowersBouquet* flowersB)
{
	std::string myOrder = ToString(flowersB->GetBouquet());
	std::cout << getName() << " accepts the flowers: " << myOrder << std::endl;
}




std::string Person::ToString(std::vector<std::string> order)
{
	std::string myOrder;
	for (int i = 0; i < order.size(); i++) {
		myOrder = myOrder + order.at(i);
		if (i != order.size() - 1)
			myOrder = myOrder + ", ";
	}
	return myOrder + ".";
}


