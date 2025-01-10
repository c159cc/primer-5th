#include <iostream>
#include "include/Sales_item.h"

int main()
{
    // Sales_item item1;
    // while (std::cin >> item1)
    // {
    //     std::cout << item1 << std::endl;
    // }

    for (Sales_item item; std::cin >> item; std::cout << item << std::endl)
        ;

    return 0;
}