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
 * prev_permutation(beg, end); // 是不是应该提供comp? 
 * 重排得到前一个排列, 返回true, 如果是第一个返回false
 */

int main() {
    vector<int> v = {1,2,4,3,5}; 
 
    auto r = prev_permutation(v.begin(), v.end());
    cout << boolalpha << r << endl; // true 1 2 3 5 4

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}