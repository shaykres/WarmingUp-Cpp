#pragma once
#include <vector>
#include <string>
class FlowersBouquet
{
private:
	std::vector<std::string> bouquet;
	bool is_arranged;
public:
	FlowersBouquet(std::vector<std::string>, bool);
	std::vector<std::string> GetBouquet();
	void arrange();
	

};

