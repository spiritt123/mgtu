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
    Word(std::string str);
    ~Word();
    
    int glas();
    void Print();
};