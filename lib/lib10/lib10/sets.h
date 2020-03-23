#ifndef SETS_H
#define SETS_H

#include <iostream>
#include <vector>

struct number
{
    bool is_int;
    int value_int;
    double value_double;
};
class set
{
public:
    set(){

    }

    template <typename T>

    void Add(T value)
    {
        if (!IsBelong(value))
        {
            number mb;
            if (sizeof(T) == sizeof(int))
            {
                mb.is_int = true;
                mb.value_int = value;
            }
            else
            {
                mb.is_int = false;
                mb.value_double = value;
            }
            sets.push_back(mb);
        }
    }
    template <typename T>
    void Delete(T value)
    {
        bool in = (sizeof(T) == sizeof(int)) ? true : false;
        for (int i = 0; i < sets.size(); ++i)
        {
            if (in == sets[i].is_int)
            {
                if (((in == true) && (value == sets[i].value_int)) ||
                    ((in == false) && (value == sets[i].value_double)))
                {
                    sets.erase(sets.begin() + i);
                }
            }
        }
    }

    template <typename T>
    bool IsBelong(T value)
    {
        bool is_belong = false;
        bool is_int    = false;
        if (sizeof(T) == sizeof(int))
        {
            is_int = true;
        }
        for (int i = 0; i < sets.size(); ++i)
        {
            if (is_int == sets[i].is_int)
            {
                if (value == sets[i].value_int)
                {
                    is_belong = true;
                }
            }
            else
            {
                if (value == sets[i].value_double)
                {
                    is_belong = true;
                }
            }
        }
        return is_belong;
    }
    void Print()
    {
        for (int i = 0; i < sets.size(); ++i)
        {
            if (sets[i].is_int == true)
            {
                std::cout << "Int: " << sets[i].value_int << '\n';
            }
            else
            {
                std::cout << "Double: " << sets[i].value_double << '\n';
            }
        }
    }
    std::vector<number> Vec()
    {
        return sets;
    }

protected:


    std::vector<number> sets;

};

class NewSets : public set
{
public:
    NewSets(){}
    double Sred()
    {
        double sr = 0;
        int k = 0;
        for (int i = 0; i < sets.size(); ++i)
        {
            if (sets[i].is_int == true)
            {
                sr += sets[i].value_int;
                ++k;
            }
        }
        return sr/(double)k;
    }
};

#endif // SETS_H
