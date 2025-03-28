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
> Use find to find the last element in a list of ints with value 0;.
 */

int main() {

    vector<int> v = {0, 1, 2, 3, 0, 4, 5};

    auto result = find(v.crbegin(), v.crend(), 0);
    if (result != v.crend()) {
        cout << "distance is " << std::distance(v.crbegin(), result)     << endl;
    }
    return 0;
}