#pragma once

#include <iostream>
#include <string>

class Word
{
private:
	std::string str;
	int         len;
	int getLen();

public:
    void Init(std::string str);

    int glas();
    void Print();
};