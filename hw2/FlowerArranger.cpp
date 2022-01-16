#include "FlowerArranger.h"
FlowerArranger::FlowerArranger(std::string name) : Person(name)
{
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* flowerB)
{
	std::cout << "Flower Arranger " << getName() << " arranges flowers." << std::endl;
	flowerB->arrange();

}