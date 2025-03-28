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
 * partition_copy(beg, end, dest1, dest2, unaryPred); /
 */

int main() {
    vector<int> v = {9, 4, 1, 5, 2, 3, 6, 7, 8};
    vector<int> v1, v2;
    partition_copy(v.begin(), v.end(), back_inserter(v1), back_inserter(v2),
                   bind(less<int>(), placeholders::_1, 5));

    for (auto x : v1) {
        cout << x << " ";
    }
    cout << endl;

    for (auto x : v2) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}