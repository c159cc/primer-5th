#include <iostream>
#include "../include/Sales_item.h"

int main()
{
    Sales_item total;
    if (std::cin >> total)
    {
        Sales_item item;
        while (std::cin >> item)
        {
            if (item.isbn() == total.isbn())
            {
                total += item;
            }
            else
            {
                std::cout << total << std::endl;
                total = item;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cout << "No data input" << std::endl;
        return -1;
    }

    // item和total分开声明, 保证item的最小可见度
    // 考虑第一次cin读取失败的情况
    return 0;
}