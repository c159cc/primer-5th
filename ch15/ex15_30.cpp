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
Write code to test your answers to the previous two exercises.


 */

class Quote {
  public:
    Quote() = default;
    Quote(const string &book, double sales_price)
        : bookNo(book), price(sales_price) {}
    virtual double net_price(size_t n) const { return n * price; }
    virtual ~Quote() = default;
    string isbn() const { return bookNo; }

  public:
    virtual Quote *clone() const & { return new Quote(*this); }
    virtual Quote *clone() && { return new Quote(std::move(*this)); }

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
    Bulk_quote *clone() const & { return new Bulk_quote(*this); }
    Bulk_quote *clone() && { return new Bulk_quote(std::move(*this)); }
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

class Bulk_quote2 : public Disc_quote {
  public:
    Bulk_quote2() = default;
    Bulk_quote2(const string &book, double price, size_t qty, double disc,
                size_t lc)
        : Disc_quote(book, price, qty, disc), limit_count(lc) {}
    double net_price(size_t) const override;

  private:
    size_t limit_count = 0;
};

double Bulk_quote2::net_price(std::size_t n) const {
    if (n <= limit_count) {
        return n * price * (1 - discount);
    }
    return limit_count * price * (1 - discount) + (n - limit_count) * price;
};

class Basket {
  public: 
    double total_receipt(ostream &) const;

  private:
    static bool compare(const shared_ptr<Quote> &lhs,
                        const shared_ptr<Quote> &rhs) {
        return lhs->isbn() < rhs->isbn();
    }
    multiset<shared_ptr<Quote>, decltype(compare) *> items{compare};

  public:
    void add_item(const Quote &sale) {
        items.insert(shared_ptr<Quote>(sale.clone()));
    }
    void add_item(Quote &&sale) {
        items.insert(shared_ptr<Quote>(std::move(sale).clone()));
    } 
};

double Basket::total_receipt(ostream &os) const {
    double sum = 0.0;
    for (auto iter = items.cbegin(); iter != items.cend();
         iter = items.upper_bound(*iter)) {
        sum += print_total(os, **iter, items.count(*iter));
    }
    os << "Total Sale: " << sum << endl;
    return sum;
}

int main() {
    Basket b1;
    b1.add_item(Bulk_quote("book1", 100, 1, 0.1));
    b1.add_item(Quote("book2", 200));
    b1.total_receipt(cout);
    return 0;
}