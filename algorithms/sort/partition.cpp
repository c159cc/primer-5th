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
 * partition(beg, end, unaryPred);
stable_partition(beg, end, unaryPred);
 */

int main() {
    vector<int> v = {9,4,1,5,2,3,6,7,8};
    vector<int> v2;
    partition(v.begin(), v.end(), bind(less<int>(), placeholders::_1, 5));

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}