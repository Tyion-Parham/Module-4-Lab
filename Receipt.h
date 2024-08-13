#pragma once
#include "Pasta.h"
#include "SoftDrink.h"
#include "Juices.h"

class Receipt
{
private:
	Food* foods;
	Drink* drinks;
	double total;

public:
	Receipt() : Receipt(nullptr, nullptr) {};
	Receipt(Food* f, Drink* d) : foods(f), drinks(d)
	{
		total += (f->getCost() * f->getQuantity()) + (d->getCost() * d->getQuantity());
	};
	Receipt(Food* f) : foods(f)
	{
		total += (f->getCost() * f->getQuantity());
	};
	Receipt(Drink* d) : drinks(d)
	{
		total += (d->getCost() * d->getQuantity());
	};
	void PrintReceipt();
	double getTotal();
	double addToTotal(double t);
	void PrintTotal();
};

