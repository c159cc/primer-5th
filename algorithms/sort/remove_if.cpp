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
 * remove_if(beg, end, unaryPred);
 */

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    remove_if(v.begin(), v.end(), [](int a) { return a < 3; });

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}