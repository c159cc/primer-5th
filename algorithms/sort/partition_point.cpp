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
 * partition_point(beg, end, unaryPred);// 返回it表示划分点,
 * 第一个不满足unaryPred的元素
 */

int main() {
    vector<int> v = {9, 4, 1, 5, 2, 3, 6, 7, 8};
    vector<int> v1, v2;

    partition(v.begin(), v.end(), bind(less<int>(), placeholders::_1, 5));

    auto it = partition_point(v.begin(), v.end(),bind(less<int>(),placeholders::_1,5));
    cout<<*it<<endl; // 5

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}