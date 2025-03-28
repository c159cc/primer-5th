#include <iostream>
#include <string>
#include "learn_Sales_data.h"
/**
 * 1.5.1 Use it to write a program that reads a set of book sales
transactions, writing each transaction to the standard output.
 */
int main()
{
    for (int i = 0; i != 2; ++i)
    {
        Sales_data data1;
        double price;
        // auto &is = data1.Input(std::cin);
        // is >> price;
        // 这里能不能链式调用?
        data1.Input(std::cin) >> price;
        data1.CalcRevenue(price);
        data1.Print();
    }

    return 0;
}