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

#include "../include/Sales_item.h"
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
using namespace std;

/**
> Use reverse_iterators to print a vector in reverse order.
 */

int main() {

    vector<int> v = {1, 2, 3, 4, 5};

    ostream_iterator<int> out_iter(cout, " ");
    copy(v.crbegin(), v.crend(), out_iter);

    return 0;
}