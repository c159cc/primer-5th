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

double print_total(ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN:" << item.isbn() << "#sold:" << n << " total due: " << ret
       << endl;
    return ret;
};

int main() {

     

    return 0;
}