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
 * is_permutation(beg1, end1, beg2);
 */

int main() {
    vector<int> v = {1, 2, 4, 3, 5};
    vector<int> v2 = {1, 4, 2, 3, 5};
    auto r = is_permutation(v.begin(), v.end(), v2.begin());
    cout << boolalpha << r << endl; // true
    
    return 0;
}