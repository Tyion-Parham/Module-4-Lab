#include "SoftDrink.h"
#include <iostream>
#include <vector>

void SoftDrink::setCost()
{
	cost = 2.57;
}

void SoftDrink::pickDrink()
{
	setCost();
	bool input;
	int choice;
	std::vector<std::string> options = {"Sprite", "Dr.Pepper", "Gatorade", "Mt Dew", "Root Beer"};
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
		else if (choice >= 1 && choice <= options.size())
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