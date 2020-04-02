#include <iostream>
#include <string>
#include "Piece.h"
#include "Elephant.h"
 
int main() 
{ 
    Elephant pi;
    pi.Init(true, 2, 2);
    pi.Print();
    std::cout<<pi.CheckColor()<<std::endl;
    std::cout<<pi.CheckPlace(3,3)<<std::endl;
    return 0; 
}
