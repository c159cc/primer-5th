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
 * find_first_of(beg1, end1, beg2, end2, binaryPred); // 不知道还有这个重载版本,
 * 是不是所有range1,range2都有这个版本?
 */

int main() {
    vector<int> v1 = {1, 2, 4, 4, 3, 4, 5, 6, 7, 4, 3, 3, 4, 8, 9, 10};
    vector<int> v2 = {4, 3, 4};

    auto it = find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end(),
                            [](int a, int b) {
                                cout << "a=" << a << " b=" << b << endl;
                                return a == b;
                            });
    if (it != v1.end()) {
        cout << "found at position " << distance(v1.begin(), it) << endl; // 2
    } else {
        cout << "not found" << endl;
    }

    // found at position 2

    return 0;
}