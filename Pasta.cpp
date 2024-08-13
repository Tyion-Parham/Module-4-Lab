#include "Pasta.h"
#include <iostream>
#include <vector>

void Pasta::setCost()
{
	cost = 13.91;
}

void Pasta::pickFood()
{
	setCost();
	bool input;
	int choice;
	std::vector<std::string> options = 
	{ "Shrimp Pasta", "Chicken Alfredo", "Sausage & Broccoli Burrata", "Pizza Spaghetti", "Beef & Broccoli Ramen"};
	input = true;
	do
	{
		for (int i = 0; i < options.size(); i++)
		{
			std::cout << options[i] << " [" << i + 1 << "]\t";
		}
		std::cin >> choice;

		if (choice < 1)
		{
			input = false;
			std::cout << "\n\ninvalid input pick 1-5\n\n";
		}
		else if ((choice >= 1) && (choice <= options.size()))
		{
			input = true;
			setName(options[choice - 1]);
		}
		else
		{
			input = false;
			std::cout << "\n\ninvalid input pick 1-5\n\n";
		}
	} while (!input);
	std::cout << "\n\n";
}