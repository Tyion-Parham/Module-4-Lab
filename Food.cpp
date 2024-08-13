#include "Food.h"

Food::Food() : Food(0) {}

Food::Food(int amt) : quantity(amt) {}

int Food::getQuantity()
{
	return quantity;
}

std::string Food::getName()
{
	return name;
}

double Food::getCost()
{
	return cost;
}

void Food::setQuantity(int amt)
{
	quantity = amt;
}

void Food::setName(std::string n)
{
	name = n;
}