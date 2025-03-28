#include <iostream>
#include <string>
#include "learn_Sales_data.h"
/**
 * 1.5.1 Use it to write a program that reads a set of book sales
transactions, writing each transaction to the standard output.
 */
int main()
{
    for(int i=0; i!=2; ++i){
        Sales_data data1;
        double price;
        std::cin >> data1.bookNo >> data1.units_sold >> price;
        data1.revenue = data1.units_sold * price; 
        std::cout << data1.bookNo << " " << data1.units_sold << " " << data1.revenue << std::endl;
    }

    return 0;
} 