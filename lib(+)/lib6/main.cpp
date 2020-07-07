#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct List
{
    int value;
    List *p = nullptr;
}List;

int sum(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x%10;
        x /=10;
    }
    return sum;
}

int main() 
{ 

    //create list
    List *first = nullptr;
    int max = 0, min = 1<<16;
    string str;
    getline(std::cin, str);
    int buf = 0;
    for (int i = 0; i < (int)str.length(); ++i)
    {
        if (str[i] == ' ')
        {
            List *start = new List;
            start->value= buf;
            start->p    = first;
            first       = start;
            buf = 0;   
        }
        else 
        {
            buf *= 10;
            buf += (int)str[i] - (int)('0');
        }
    }

    if (str[(int)str.length() - 1] != ' ')
    {
        List *start = new List;
        start->value= buf;
        start->p    = first;
        first       = start;
    }

    List *pr = first;

    while (pr->p != nullptr)
    {
        int ch = sum(pr->value);
        if (max < ch) max = ch;
            ch = sum(pr->value);
        if (min > ch) min = ch; 
        cout<<pr->value<< '\n';
        pr = pr->p;
    }

    cout<<pr->value << '\n';
    
    int ch = sum(pr->value);

    if (max < ch) 
        max = ch;
    
    ch = sum(pr->value);

    if (min > ch) 
        min = ch;
    
    cout<<"max: "<<max<<'\n';
    cout<<"min: "<<min<<'\n';
    
    return 0; 
}
