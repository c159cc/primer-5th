#include <iostream>
#include <string>
#include "learn_Sales_data.h"
/**
Exercise 1.21: Write a program that reads two Sales_item objects that
have the same ISBN and produces their sum.
 */
int main()
{
    Sales_data data1, data2;
    double price;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.CalcRevenue(price);
    std::cout << data1.bookNo << " " << data1.units_sold << " " << data1.revenue << std::endl;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.CalcRevenue(price);
    std::cout << data2.bookNo << " " << data2.units_sold << " " << data2.revenue << std::endl;

    if (data1.bookNo == data2.bookNo) {
        Sales_data sum;
        sum.bookNo = data1.bookNo;
        sum.units_sold = data1.units_sold + data2.units_sold;
        sum.revenue = data1.revenue + data2.revenue;
        std::cout << sum.bookNo << " " << sum.units_sold << " " << sum.revenue << std::endl;
    }
    return 0;
} 