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
 * search_n(beg, end, n, val, binaryPred); // 连续出现n个val的位置, 返回it
 */

int main() {
    vector<int> v1 = {1, 2, 4, 4, 3, 4, 5, 6, 7, 4, 3, 3, 3, 4, 8, 9, 10};
    vector<int> v2 = {4, 3, 4};

    auto it = search_n(v1.begin(), v1.end(), 3, 3, [](int a, int b){
        cout << "a: " << a << " b: " << b << endl;
        return a == b;
    });
    if (it != v1.end()) {
        cout << "found: " << *it<< " distance: "<< distance(v1.begin(), it) << endl;
    } else {
        cout << "not found" << endl;
    }
   

    return 0;
}