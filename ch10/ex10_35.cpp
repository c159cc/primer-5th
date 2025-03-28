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
> Now print the elements in reverse order using ordinary iterators.
 */

int main() {

    vector<int> v = {1, 2, 3, 4, 5};

    ostream_iterator<int> out_iter(cout, " ");
    for (auto it = v.end(); it != v.begin();) {
        cout << *--it << " ";
    }
    cout << endl;
    return 0;
}