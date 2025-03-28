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
 * partial_sort(beg, mid, end); // beg到mid排序
 */

int main() {
    vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    auto it = is_sorted_until(v.begin(), v.end());
    auto dis1 = distance(v.begin(), it);
    cout << "before partial_sort dis1: " << dis1 << endl;// 1
    partial_sort(v.begin(), v.begin() + 5, v.end());
    it = is_sorted_until(v.begin(), v.end());
    dis1 = distance(v.begin(), it);
    cout << "after partial_sort dis1: " << dis1 << endl;// 6

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}