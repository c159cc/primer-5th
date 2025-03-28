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
 * mismatch(beg1, end1, beg2, binaryPred); // 不存在end2, 找第一对不匹配的对,
 * 返回pair<it,it>
 */

int main() {
    vector<int> v1 = {1, 2, 4, 4, 3, 4, 5, 6, 7, 4, 3, 3, 4, 8, 9, 10};
    vector<int> v2 = {1, 2, 3, 5};

    auto it = mismatch(v1.begin(), v1.end(), v2.begin(), [](int a, int b){
        return a == b;
    });
    if (it.first == v1.end()) {
        cout << "no mismatch found" << endl;
    } else {
        cout << "v1 " << distance(v1.begin(), it.first) << endl; // 2
        cout << "v2 " << distance(v2.begin(), it.second) << endl; // 2
    }

    return 0;
}