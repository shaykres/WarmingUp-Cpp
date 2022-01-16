#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> b, bool if_arranged) 
{
	bouquet = b;
	is_arranged = if_arranged;
}

std::vector<std::string> FlowersBouquet::GetBouquet()
{
	return bouquet;
}


void FlowersBouquet::arrange()
{
	is_arranged = true;

}
