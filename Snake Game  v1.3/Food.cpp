#include "Food.h"

Food::Food()
{
	GenerateFood();
}

void Food::FoodRange()
{
	fRange.X = (3 - Draw::width) + 3;
	fRange.Y = (3 - Draw::height) + 3;
}

void Food::GenerateFood()
{
	srand(time(NULL));
	FoodRange();
	fPosition.X = 3 + rand() % fRange.X;
	fPosition.Y = 3 + rand() % fRange.Y;

}

COORD Food::RealPosition()
{
	return fPosition;
}



