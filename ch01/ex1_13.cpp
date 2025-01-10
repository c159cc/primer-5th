#include <iostream>

int main()
{

    std::cout << "Enter two numbers:" << std::endl;
    int small = 0, big = 0, temp;
    std::cin >> small >> big;
    if (small > big)
    {
        temp = small;
        small = big;
        big = temp;
    }

    for (int i = small; i != big; ++i)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}