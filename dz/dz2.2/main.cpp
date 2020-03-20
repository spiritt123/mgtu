

#include <iostream>


using namespace std;

int main()
{
    string str, str_all, word;
    
    cout << "\nInput word\n";
    cin >> word;

    while (cin >> str)
    {
        str_all += '\n'+str;
    }


    cout << str_all << '\n';

    return 0;
}
//(ctrl)+d;
