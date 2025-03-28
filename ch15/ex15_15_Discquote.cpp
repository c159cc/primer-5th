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
> Define your own versions of Disc_quote and Bulk_quote.
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
class Disc_quote : public Quote {
  public:
    Disc_quote() = default;
    Disc_quote(const string &book, double price, size_t qty, double disc)
        : Quote(book, price), quantity(qty), discount(disc) {}
    double net_price(size_t) const = 0;

  protected:
    size_t quantity = 0;
    double discount = 0.0;
};
class Bulk_quote : public Disc_quote {
  public:
    Bulk_quote() = default;
    Bulk_quote(const string &book, double price, size_t qty, double disc)
        : Disc_quote(book, price, qty, disc) {}
    double net_price(size_t) const override;
}; 

double Bulk_quote::net_price(std::size_t n) const {
    return n * price * (n >= quantity ? 1 - discount : 1);
}

double print_total(ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN:" << item.isbn() << "#sold:" << n << " total due: " << ret
       << endl;
    return ret;
};

class Bulk_quote2 : public Quote {
  public:
    Bulk_quote2() = default;
    Bulk_quote2(const string &book, double p, size_t qty, double disc)
        : Quote(book, p), limit_count(qty), discount(disc) {};
    double net_price(size_t) const override;

  private:
    size_t limit_count = 0;
    double discount = 0.0;
};

double Bulk_quote2::net_price(std::size_t n) const {
    if (n <= limit_count) {
        return n * price * (1 - discount);
    }
    return limit_count * price * (1 - discount) + (n - limit_count) * price;
}

int main() {
    Quote q1("book1", 100);
    Bulk_quote bq("book2", 200, 10, 0.1);
    Bulk_quote2 bq2("book3", 20, 5, 0.5);
    print_total(cout, q1, 1);
    print_total(cout, bq, 2);
    print_total(cout, bq2, 6); // 第六本不打折

    return 0;
}