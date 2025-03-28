#include <iostream>
#include <string>
#include "learn_Sales_data.h"
/**
Exercise 1.22: Write a program that reads several transactions for the same
ISBN. Write the sum of all the transactions that were read.
 */
int main()
{
    Sales_data total;
    double price;
    // 这里可以做一个判断
    std::cin >> total.bookNo >> total.units_sold >> price;
    total.revenue = total.units_sold * price;

    Sales_data trans;

    while (std::cin >> trans.bookNo >> trans.units_sold >> price)
    {
        if (trans.bookNo == total.bookNo)
        {
            total.units_sold += trans.units_sold;
            total.revenue += trans.units_sold * price;
        }
        else
        {
            std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;

            total.bookNo = trans.bookNo;
            total.units_sold = trans.units_sold;
            total.revenue = trans.units_sold * price;
        }
    }
    std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;

    return 0;
}