#include "Receipt.h"
#include <iostream>

void Receipt::PrintReceipt()
{
	if (foods != nullptr)
	{
		std::cout << foods->getQuantity() << "\t" << foods->getName() <<
			"\t\t\t" << (foods->getCost() * foods->getQuantity()) << "\n\n";
	}

	if (drinks != nullptr)
	{
		std::cout << drinks->getQuantity() << "\t" << drinks->getSize() << " " << drinks->getName() <<
			"\t\t\t" << (drinks->getCost() * drinks->getQuantity()) << "\n" << drinks->getIce() << "\n";
	}
}

double Receipt::getTotal()
{
	return total;
}

double Receipt::addToTotal(double t)
{
	total += t;
	return total;
}

void Receipt::PrintTotal()
{
	std::cout << "\t\t\t\t\t" << total;
}