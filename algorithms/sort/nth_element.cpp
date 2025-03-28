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
 * nth_element(beg, n, end); // 第n个元素的位置, 正好是排序后它的位置
 */

int main() {
    vector<int> v = {9, 4, 1, 5, 2, 3, 6, 7, 8};
    vector<int> v1, v2;

    nth_element(v.begin(), v.begin() + 5, v.end()); // 4 3 1 2 5 6 8 7 9 这里是6的位置

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}