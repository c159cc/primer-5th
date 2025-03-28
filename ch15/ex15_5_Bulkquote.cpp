#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
#include <stack>

#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;

/**
> Define your own versions of the Quote class and the print_total function.
 */

class Quote {
  public:
    Quote() = default;
    Quote(const string &book, double sales_price)
        : bookNo(book), price(sales_price) {}
    virtual double net_price(size_t n) const { return n * price; }
    virtual ~Quote() = default;
    string isbn() const { return bookNo; }

  private:
    string bookNo;

  protected:
    double price = 0.0;
};

class Bulk_quote : public Quote {
  public:
    Bulk_quote() = default; 
    Bulk_quote(const string &book, double p, size_t qty, double disc)
        : Quote(book, p), min_qty(qty), discount(disc) {};
    double net_price(size_t) const override;

  private:
    size_t min_qty = 0;
    double discount = 0.0;
};

double Bulk_quote::net_price(std::size_t n) const {
    return n * price * (n >= min_qty ? 1 - discount : 1);
}

double print_total(ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN:" << item.isbn() << "#sold:" << n << " total due: " << ret
       << endl;
    return ret;
};

int main() {
    Quote q1("book1", 100);
    Bulk_quote bq("book2", 200, 10, 0.1);
    print_total(cout, q1, 1);
    print_total(cout, bq, 2);

    return 0;
}