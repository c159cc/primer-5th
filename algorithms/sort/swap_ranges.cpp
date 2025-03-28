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
 * swap_ranges(beg1, end2, beg2);
 */

int main() {
    vector<int> v = { 3, 1, 4,   5, 9, 2, 6, 5, 3, 5};

    swap_ranges(v.begin(), v.begin() + 3, v.begin() + 3); // 5 9 2 3 1 4 

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl; 
    return 0;
}