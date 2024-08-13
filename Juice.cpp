#include "Juices.h"
#include <iostream>

void Juice::setCost()
{
	cost = 3.12;
}

void Juice::pickDrink()
{
	setCost();
	bool input;
	int choice;
	std::string options = "Lemonade [1] \tFruit Punch [2] \tOJ [3] \tStrawberry Lemonade [4]\n";
	//I thought about makeing a vector of options but decided against it as i felt it wouldnt be worth the work
	input = true;
	do
	{
		std::cout << options;
		std::cin >> choice;
		
		if (choice < 1)
		{
			input = false;
			std::cout << "\n\ninvalid input pick 1-4\n\n";
		}
		else if (choice == 1)
		{
			input = true;
			setName("Lemonade");
		}
		else if (choice == 2)
		{
			input = true;
			setName("Fruit Punch");
		} //About here I regreted my privous decision as I could've just done setName(options[choice-1])
		else if (choice == 3)
		{
			input = true;
			setName("OJ");
		}
		else if (choice == 4)
		{
			input = true;
			setName("Strawberry Lemonade");
		}
		else
		{
			input = false;
			std::cout << "\n\ninvalid input pick 1-4\n\n";
		}
	} while (input = false);
	std::cout << "\n\n";
}