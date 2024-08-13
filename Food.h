#pragma once

#include <string>

class Food
{
protected:
	int quantity;
	std::string name;
	double cost;

public:
	Food();
	Food(int amt);
	int getQuantity();
	std::string getName();
	double getCost();
	void setQuantity(int amt);
	void setName(std::string n);
	virtual void setCost() = 0;
	virtual void pickFood() = 0;
};

