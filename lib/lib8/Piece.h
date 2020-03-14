#pragma once

class Piece
{
protected:
	bool white;
	int x,y;

public:
	void Init(bool white, int x, int y);
	void Print();
	bool CheckColor();
};
