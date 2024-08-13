#pragma once
#include <string>
class Drink
{
protected:
	std::string name;
	int size, ice, quantity;
	double cost;

public:
	Drink();
	Drink(int s, int i, int num);
	char getSize();
	std::string getName();
	std::string getIce();
	int getQuantity();
	double getCost();
	void setSize(int s);
	void setName(std::string n);
	void setIce(int i);
	void setQuantity(int q);
	virtual void setCost() = 0;
	virtual void pickDrink() = 0;
};

