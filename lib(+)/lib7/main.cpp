#include <iostream>
#include <string>
#include "WordNC.h"
 
int main() 
{ 
    /*
    std::string str = "egasr";
    Word wr(str);
    std::cout << wr.glas() << '\n';
    wr.Print();
    */

    std::string str = "egasr";
    Word wr;
    wr.Init(str);
    std::cout << wr.glas() << '\n';
    wr.Print();


    return 0; 
}
