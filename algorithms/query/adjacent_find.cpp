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
 * adjacent_find(beg, end); // 第一对值相同的元素, 返回it
 */

int main() {
    vector<int> v1 = {1, 2, 4, 6, 6, 6, 8, 9, 10};
    auto it1 = adjacent_find(v1.cbegin(), v1.cend() ); 
    cout << "find: " << *it1 << " distance: " << distance(v1.cbegin(), it1) << endl; // 6 3

    auto it2 = adjacent_find(v1.cbegin(), v1.cend(),
                             [](int a, int b) { return a == b; });
    cout << "find: " << *it2 << " distance: " << distance(v1.cbegin(), it2)
         << endl; // 6 3
    return 0;
}