
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    
    std::ofstream fout;
    fout.open("File.txt");
    if (!fout.is_open())
    {
        std::cerr << "File not fount!";
        return 1;
    }

    std::string str;
    std::cout << "Input text: ";
    getline(std::cin, str);

    fout << str;
    fout.close();

    std::ifstream fin;
    fin.open("File.txt");
    //if (!fout.is_open())
    //{
    //    std::cerr << "File not fount!(fi)";
    //    return 1;
    //}

    std::ofstream hout;
    hout.open("File2.txt");
    if (!hout.is_open())
    {
        std::cerr << "File not fount!(ho)";
        return 1;
    }

    char ch;
    bool fl = false;

    while (fin.get(ch))
    {
        if (fl == true)
        {
            hout << ch;
            fl = false;    
        }

        if (ch == 'a')
        {
            fl = true;
        }
    }

    hout.close();
    fin.close();

    return 0;
}
