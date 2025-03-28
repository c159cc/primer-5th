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
 * inplace_merge(beg, mid, end);
 */

int main() {
    vector<int> v1 = {1,   3,  5, 2,4};
   
    inplace_merge(v1.begin(), v1.begin() + 3, v1.end());

    for (auto i : v1) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}