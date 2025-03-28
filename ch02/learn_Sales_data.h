#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    void CalcRevenue(double price);
    void Print();
    std::istream &Input(std::istream &is);
};

void Sales_data::CalcRevenue(double price)
{
    revenue = units_sold * price;
}

void Sales_data::Print()
{
    std::cout << "BookNo: " << bookNo;
    std::cout << " Units Sold: ";
    std::cout << " Revenue: " << revenue << std::endl;
}

// 要返回就必须传进来
std::istream &Sales_data::Input(std::istream &is)
{
    is >> bookNo >> units_sold;
    return is;
}
#endif