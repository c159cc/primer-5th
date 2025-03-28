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
 * partial_sort_copy(beg, end, destBeg, destEnd);
 */

int main() {
    vector<int> v = { 3, 1, 4,   5, 9, 2, 6, 5, 3, 5};
    vector<int> v2(3);

    partial_sort_copy(v.begin(), v.end(), v2.begin(), v2.end());

    for (auto x : v2) {
        cout << x << " ";
    }
    cout << endl; 
    return 0;
}