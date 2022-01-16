#pragma once 
#include "Person.h"
#include "Grower.h"
#include "FlowersBouquet.h"
class Wholesaler : public Person
{
private:
	Grower* grower;
public:
	Wholesaler(std::string, Grower*);
	FlowersBouquet* acceptOrder(std::vector < std::string >);
};