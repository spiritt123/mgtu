
#include <iostream>
#include <string>
#include <vector>
class Van
{
public:
    Van(int carrying, int massa, std::string type_item)
    {
        _carrying  = carrying; 
        _massa     = massa; 
        _type_item = type_item; 
    }  

    void Print()
    {
        std::cout << "carrying: " << _carrying << '\t'
                  << "massa: "    << _massa    << '\t'
                  << "type_item: "<< _type_item<< '\n';
    }
    
    int GetPercentOccupancy()
    {
        return (_massa * 100)/_carrying;
    }

    int GetCarrying()
    {
        return _carrying;
    }

    int GetMassa()
    {
        return _massa;
    }

    std::string GetType()
    {
        return _type_item;
    }
protected:
    int _carrying;
    int _massa;
    std::string _type_item;
};

class Train
{
public:
    Train()
    {

    }

    void AddVal(int carrying, int massa, std::string type_item)
    {
        Van van(carrying, massa, type_item);
        _train.push_back(van);
    }

    void DeleteVal()
    {
        _train.pop_back();
    }

    void PrintInfo()
    {
        for (int i = 0; i < _train.size(); ++i)
        {
            _train[i].Print();
        }
    }

    int GetAllCarry()
    {
        int carry = 0;
        for (int i = 0; i < _train.size(); ++i)
        {
            carry += _train[i].GetCarrying();
        }
        return carry;
    }

    int Get50plus()
    {
        int Count = 0;
        for (int i = 0; i < _train.size(); ++i)
        {
            if (_train[i].GetPercentOccupancy() > 50)
            {
                Count++;
            }
        }
        return Count; 
    }

protected:
    std::vector<Van> _train;
}; 

int main()
{
    Train *tr = new Train();
    while (true)
    {
        std::cout << '\n' << "1-add, 2-delete, 3-print" << '\n';
        int a = 0;
        std::cin >> a;
        int massa, carry;
        std::string name;
        if (a == 1)
        {
            std::cout << "Введите грузоподъёмность, массу и наименование груза" << '\n';
            std::cin >> carry >> massa >> name; 
            tr->AddVal(carry, massa, name);
        }
        if (a == 2)
        {
            tr->DeleteVal();
        }
        if (a == 3)
        {
            tr->PrintInfo();
            std::cout << "All carry: " << tr->GetAllCarry() << '\n';
            std::cout << "> 50%\\ carry: " << tr->Get50plus() << '\n'; 
        }
    }



    return 0;
}