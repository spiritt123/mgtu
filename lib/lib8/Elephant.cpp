
#include "Elephant.h"

bool Elephant::CheckPlace(int x, int y)
{
	if ((this->x - x) == (this->y - y))
	{
		return true;
	}
	else if ((this->x + this->y) == (x + y))
	{
		return true;
	}
	return false;
}

