#include "Piece.h"
#include <iostream>

void Piece::Init(bool white, int x, int y)
{
	this->white = white;
	this->x 	= x;
	this->y 	= y;
}

void Piece::Print()
{
	if (white)
	{
		std::cout<<"white\t";
	}
	else
	{
		std::cout<<"black\t";	
	}
	std::cout<<"x:"<<this->x<<" | y:"<<this->y<<std::endl;
}

bool Piece::CheckColor()
{
	if (((this->x+this->y)%2 == 0) &&  (this->white)) return true;
	if (((this->x+this->y)%2 == 1) && !(this->white)) return true;
	return false;
}
