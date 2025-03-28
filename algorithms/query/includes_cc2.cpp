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
 * includes(beg1, end1, beg2, end2); // 是否包含子序列, 返回bool
 */

int main() {
    vector<int> v1 = {8, 2, 4, 6, 6, 6, 8, 9, 10};
    vector<int> v2 = {4, 6, 6};

    bool b = includes(v1.begin(), v1.end(), v2.begin(), v2.end());
    cout << "res=" << boolalpha << b << endl; // true

    return 0;
}