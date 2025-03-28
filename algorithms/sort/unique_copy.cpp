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
 * unique_copy(beg, end,dest);
 */

int main() {
    vector<int> v = {1, 2, 3, 3, 4, 5, 6, 7, 8, 9};

    vector<int> v2;
    unique_copy(v.begin(), v.end(), back_inserter(v2));

    for (auto x : v2) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}