
#include "WordC.h"


Word::Word(std::string str)
{
	this->str = str;
	len = getLen();
}

int Word::getLen()
{
	return this->str.length();
}

int Word::glas()
{
	int value = 0;
	char gl[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	for (int i = 0; i < this->len; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if (this->str[i] == gl[j]) value++;
		}
	}

	return value;
}

void Word::Print()
{
	std::cout<<this->str<<"\t"<<this->len<<std::endl;
}

Word::~Word(){}

