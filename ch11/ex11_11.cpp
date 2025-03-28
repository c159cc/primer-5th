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

#include "../ch07/learn_SalesData.h"
#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <numeric>
#include <set>
using namespace std;


/**
> Redefine bookstore without using decltype.

 */
bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
};

int main() {
    multiset<Sales_data, decltype(compareIsbn) *> bookstore(compareIsbn);


    using fn = bool(*)(const Sales_data &, const Sales_data &);
    multiset<Sales_data,  fn> bookstore2(compareIsbn);
    return 0;
}