
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>
using std::istream;
using std::ostream;
// unchanged from ch14 except for added friend declaration for hash.
class Sales_data {
    friend std::hash<Sales_data>;
    friend std::ostream &operator<<(std::ostream &, const Sales_data &);
    friend std::istream &operator>>(std::istream &, Sales_data &);
    friend bool operator==(const Sales_data &, const Sales_data &);

    friend std::ostream &print(std::ostream &, const Sales_data &);
    friend std::istream &read(std::istream &, Sales_data &);

  public:
    // constructors
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(p * n) {}
    Sales_data(std::istream &);

    std::string isbn() const { return bookNo; }
    Sales_data &operator+=(const Sales_data &);

  private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// non-member Sales_data operations
inline bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
}

inline bool operator==(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() == rhs.isbn() && lhs.units_sold == rhs.units_sold &&
           lhs.revenue == rhs.revenue;
}
inline bool operator!=(const Sales_data &lhs, const Sales_data &rhs) {
    return !(lhs == rhs);
}

// old versions
Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);

// new operator functions
Sales_data operator+(const Sales_data &, const Sales_data &);
std::ostream &operator<<(std::ostream &, const Sales_data &);
std::istream &operator>>(std::istream &, Sales_data &);

// specialize std::hash
// note : template specialization should be put in the header!
namespace std {
template <> struct hash<Sales_data> {
    typedef size_t result_type;
    typedef Sales_data argument_type;
    size_t operator()(const Sales_data &s) const;
};
    size_t hash<Sales_data>::operator()(const Sales_data &s) const {
        return std::hash<string>()(s.bookNo) ^ (std::hash<unsigned>()(s.units_sold) << 1) ^
               (std::hash<double>()(s.revenue) >> 1);
    }
} // namespace std

Sales_data::Sales_data(istream &is) {
    is >> *this; // read a transaction from is into this object
}

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

// member binary operator: left-hand operand is bound to the implicit this
// pointer assumes that both objects refer to the same book
Sales_data &Sales_data::operator+=(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// assumes that both objects refer to the same book
Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs; // copy data members from lhs into sum
    sum += rhs;           // add rhs into sum
    return sum;
}

istream &operator>>(istream &is, Sales_data &item) {
    double
        price; // no need to initialize; we'll read into price before we use it
    is >> item.bookNo >> item.units_sold >> price;
    if (is) // check that the inputs succeeded
        item.revenue = item.units_sold * price;
    else
        item = Sales_data(); // input failed: give the object the default state
    return is;
}

ostream &operator<<(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " "
       << item.avg_price();
    return os;
}

// operators replace these original named functions
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

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs; // copy data members from lhs into sum
    sum += rhs;           // add rhs into sum
    return sum;
}

#endif
