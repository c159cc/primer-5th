#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>
using std::istream;
using std::ostream;

class Sales_data {
    // friends
    friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);

    friend std::ostream &operator<<(std::ostream &os, const Sales_data &s);

    friend std::istream &operator>>(std::istream &is, Sales_data &s);

    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend std::ostream &print(std::ostream &, const Sales_data &);
    friend std::istream &read(std::istream &, Sales_data &);

  public:
    // constructors
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(p * n) {}
    Sales_data(const Sales_data &s)
        : bookNo(s.bookNo), units_sold(s.units_sold), revenue(s.revenue) {}

    Sales_data(Sales_data &&s)
        : bookNo(s.bookNo), units_sold(s.units_sold), revenue(s.revenue) {}

    ~Sales_data() {}
    Sales_data(std::istream &);

    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);

    // assignments
    Sales_data &operator=(const Sales_data &rhs);
    Sales_data &operator=(const std::string &rhs);
    Sales_data &operator+=(const Sales_data &rhs);

    // conversion
    explicit operator std::string() const { return bookNo; }
    explicit operator double() const { return revenue; }

    double avg_price() const;

  private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// overloaded operators added 10.Jan.2014 for ex14.2
inline Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum += rhs;

    return sum;
}

std::ostream &operator<<(std::ostream &os, const Sales_data &item);

std::istream &operator>>(std::istream &is, Sales_data &s);

// nonmember Sales_data interface functions
Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);

// used in future chapters
inline bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
}

Sales_data::Sales_data(std::istream &is) {
    // read will read a transaction from is into this object
    read(is, *this);
}

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

// add the value of the given Sales_data into this object
Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold; // add the members of rhs into
    revenue += rhs.revenue;       // the members of ``this'' object
    return *this; // return the object on which the function was called
}
// = Sales_data
Sales_data &Sales_data::operator=(const Sales_data &rhs) {
    this->bookNo = rhs.bookNo;
    this->revenue = rhs.revenue;
    this->units_sold = rhs.units_sold;

    return *this;
}

// =string
Sales_data &Sales_data::operator=(const std::string &rhs) {
    *this = Sales_data(rhs);
    return *this;
}

// +=
Sales_data &Sales_data::operator+=(const Sales_data &rhs) {
    this->revenue += rhs.revenue;
    this->units_sold += rhs.units_sold;

    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs; // copy data members from lhs into sum
    sum.combine(rhs);     // add data members from rhs into sum
    return sum;
}

// transactions contain ISBN, number of copies sold, and sales price
istream &read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " "
       << item.avg_price();
    return os;
}

// added 10.Jan 2014
std::ostream &operator<<(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " "
       << item.avg_price();

    return os;
}

// added 12.Jan 2014
std::istream &operator>>(std::istream &is, Sales_data &s) {
    double price;

    // read input
    is >> s.bookNo >> s.units_sold >> price;

    // if successful, write into the object, give the object default state
    // otherwise.
    if (is)
        s.revenue = s.units_sold * price;
    else
        s = Sales_data();

    return is;
}

#endif