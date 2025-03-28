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
#include <bitset>
#include <cctype>
#include <functional>
#include <iomanip>
#include <map>
#include <memory>
#include <numeric>
#include <random>
#include <regex>
#include <set>
using namespace std;

/**
 * upper_bound(beg, end, val); // 大于val的值, 返回it
 */

int main() {
    vector<int> v1 = {1, 2, 4, 6, 6, 6, 8, 9, 10};
    auto it1 = lower_bound(v1.cbegin(), v1.cend(), 6);
    auto it2 = upper_bound(v1.cbegin(), v1.cend(), 6);

    if (it1 != v1.cend()) {
        cout << "lower_bound=" << *it1 <<" distance="<< distance(v1.cbegin(), it1) << endl; // 3
    }
    if (it2 != v1.cend()) {
        cout << "upper_bound=" << *it2 << " distance="<< distance(v1.cbegin(), it2) << endl; // 6
    }

    return 0;
}