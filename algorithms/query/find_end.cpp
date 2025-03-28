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
 * find_end(beg1, end1, beg2, end2); // 找最后一个子序列, 返回it
 */

int main() {
    vector<int> v1 = {1, 2, 4, 4, 3, 4, 5, 6, 7, 4, 3, 4, 8, 9, 10};
    vector<int> v2 = {4, 3, 4};

    auto it = find_end(v1.begin(), v1.end(), v2.begin(), v2.end());
    if (it != v1.end()) {
        cout << "found at position " << distance(v1.begin(), it) << endl; // 3
    }

    auto it2 = find_end(v1.begin(), v1.end(), v2.begin(), v2.end(),
                        [](int a, int b) { return a == b; });
    if (it2 != v1.end()) {
        cout << "found at position " << distance(v1.begin(), it2) << endl; // 3
    }

    return 0;
}