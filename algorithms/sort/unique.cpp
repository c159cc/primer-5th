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
 * unique(beg, end);

unique(beg, end, binaryPred); // 注意这里没有if
 */

int main() {
    vector<int> v = {1, 2, 3, 3, 4, 5, 6, 7, 8, 9};

    vector<int> v2;
    unique(v.begin(), v.end());

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}