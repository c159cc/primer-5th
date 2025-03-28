#include <iostream>

int main()
{

    int i = 10, j = 20;
    int *p1 = &i, *p2 = &j;

    decltype((i)) c = j;
    std::cout << "i = " << i << std::endl;
 
    return 0;
}