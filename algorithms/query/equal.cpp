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
 * equal(beg1, end1, beg2);// 果然是不存在end2的, 如果beg2更长会相等吗?
 */

int main() {
    vector<int> v1 = {1, 2, 4, 4, 3, 4, 5, 6, 7, 4, 3, 3, 4, 8, 9, 10};
    vector<int> v2 = {1, 2, 4};

    auto bEqual = equal(v1.begin(), v1.end(), v2.begin());
    if (bEqual) {
        cout << "v1 and v2 are equal." << endl;
    } else {
        cout << "v1 and v2 are not equal." << endl;
    }

    return 0;
}