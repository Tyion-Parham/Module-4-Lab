#include "Pasta.h"
#include "Juices.h"
#include "SoftDrink.h"
#include "Receipt.h"

int main()
{
	// for drinks 1 & below = small, 2 = medium,and 3 & above = large
	// and 1 = light ice, 2 = no ice, and regular ice, or "", is anything else 
	Pasta* pasta = new Pasta(1);
	Juice* juice = new Juice(1, 1, 1);
	SoftDrink* soda = new SoftDrink(2, 0, 2);
	pasta->pickFood();
	juice->pickDrink();
	soda->pickDrink();
	Receipt receipt1(pasta, juice);
	receipt1.PrintReceipt();
	Receipt receipt2(soda);
	receipt2.PrintReceipt();
	receipt2.addToTotal(receipt1.getTotal());
	receipt2.PrintTotal();
	
}