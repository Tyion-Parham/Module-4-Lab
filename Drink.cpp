#include "Drink.h"

Drink::Drink() : Drink(0, 0, 0) {}

Drink::Drink(int s, int i, int num) : size(s), ice(i), quantity(num) {}

char Drink::getSize()
{
	if (size < 1)
		return 's';
	else if (size == 1)
		return 's';
	else if (size == 2)
		return 'm';
	else
		return 'l';
}

std::string Drink::getName()
{
	return name;
}

std::string Drink::getIce()
{
	std::string amtIce;
	if (ice == 1)
		amtIce = "-\tlight ice\n";
	else if (ice == 2)
		amtIce = "-\tno ice\n";
	else
		amtIce = "";
	return amtIce;
}

int Drink::getQuantity()
{
	return quantity;
}

double Drink::getCost()
{
	return cost;
}

void Drink::setSize(int s)
{
	size = s;
}

void Drink::setName(std::string n)
{
	name = n;
}

void Drink::setIce(int i)
{
	ice = i;
}

void Drink::setQuantity(int q)
{
	quantity = q;
}