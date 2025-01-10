#include <iostream>
#include "../include/Sales_item.h"

int main()
{

    Sales_item total;
    if (std::cin >> total)
    {
        int cnt = 1;
        Sales_item item;
        while (std::cin >> item)
        {
            if (item.isbn() == total.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout << total.isbn() << " " << cnt << std::endl;
                cnt = 1;
            }
        }
        std::cout << total.isbn() << " " << cnt << std::endl;
    }

    return 0;
}