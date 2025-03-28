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
 * set_difference(beg1, end1, beg2, end2, dest); // range1中有, range2中没有的
 */

int main() {
    vector<int> v1 = {1, 2, 4, 6};
    vector<int> v2 = {3, 4, 6, 7};
    vector<int> v3;
    set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(),
                   back_inserter(v3));
    for (auto it = v3.begin(); it != v3.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl; // 1 2

    return 0;
}