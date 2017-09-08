/*
	Written by Dhanveer Ramnauth
*/


#include <iostream>
#include "Area.h"

void Select()
{
	int selection;

	std::cout << "0: SQUARE, 1: RECTANGLE, 2: PARELELLOGRAM, 3:TRAPEZOID, 4: CIRCLE" << std::endl;
	std::cin >> selection;

	switch (selection)
	{
	case 0:
		Square();
		break;
	case 1:
		Rectangle();
		break;
	case 2:
		Paralellogram();
		break;
	case 3:
		Trapezoid();
		break;
	case 4:
		Circle();
		break;
	}
}

int main()
{
	Select();

	std::cin.get();
	std::cin.get();
	main();
}




