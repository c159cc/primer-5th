#include <iostream>

int main()
{

    int i = 10, j = 20;
    int *p1 = &i, *p2 = &j;

    p1 = p2;
    *p1 = 30;
    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
    return 0;
}