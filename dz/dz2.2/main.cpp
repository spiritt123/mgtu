#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, res1, res2, res3;
    bool ex = true;
    
    while (ex && cin >> s)
    {
        if (s[s.size() - 1] == '.')
        {
            ex = false;
            s.erase(s.size() - 1, 1);
        }
        
        res1 += s + ' ';
    }

    int number = 1;
    std::cout << "Введите слово, на которое будет происходить замена: ";
    //std::cin  >> res3;
    std::cout << res1.size();

    for (int i = 0; i < res1.size(); ++i)
    {
        ex = true;
        while (res1[i] != ' ')
        {
            if (ex == true)
            {
                if ((res1[i] == 'л') && (number % 2 == 1)) break;
                if ((res1[i] == 'н') && (number % 2 == 0))
                {
                    res2 += res3;
                    break;
                }
                ex = false;
            }
        }
        ++number;
    }

    cout << res1 << '\n';

    return 0;
}