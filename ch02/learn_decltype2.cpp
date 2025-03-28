#include <iostream>

int main()
{

    int i = 10, j = 20; 
    decltype((i=j)) c = j;
    c = 100;
    std::cout << "j = " << j << std::endl; //100
 
    return 0;
}