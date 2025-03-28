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
> Given a vector that has ten elements, copy the elements from positions 3
through 7 in reverse order to a list.
 */

int main() {

    vector<int> v = {0, 1, 2, 3, 4,5,6,7,8,9};
    list<int> l;
      

    copy(v.cbegin()+3, v.cbegin()+8, front_inserter(l));
 
    // ostream_iterator需要指定泛型
    copy(l.cbegin(), l.cend(), ostream_iterator<int>(cout, " "));
    return 0;
}