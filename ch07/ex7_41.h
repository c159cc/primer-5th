#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
> Write a version of the transaction-processing program from 1.6 using the
Sales_data class you defined for the exercises in 2.6.1.
 */
struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    string isbn() const { return bookNo; };
    Sales_data &combine(const Sales_data &rhs);
    double avg_price() const;

    Sales_data(const std::string &s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(p * n) {
        cout << "(const std::string &s, unsigned n, double p)" << endl;
    }
    Sales_data(const std::string &s) : Sales_data(s, 0, 0.0) {
        cout << "const std::string &s" << endl;
    }
    Sales_data() : Sales_data("", 0, 0.0) { cout << "default" << endl; };
    Sales_data(std::istream &);
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
ostream &print(ostream &os, const Sales_data &item);
istream &read(istream &is, Sales_data &item);

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " "
       << item.avg_price();
    return os;
}

istream &read(istream &is, Sales_data &item) {
    is >> item.bookNo >> item.units_sold >> item.revenue;
    return is;
}

Sales_data::Sales_data(std::istream &is) {
    cout << "istream& " << endl;
    read(is, *this);
}
