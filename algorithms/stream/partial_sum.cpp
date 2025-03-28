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
 * partial_sum(beg, end, dest); // 前n项之和, 不包含自己
 */

int main() {
    vector<int> v1 = {1, 2,3,4,5};
    vector<int> v2;

    partial_sum(v1.begin(), v1.end(), back_inserter(v2));
   
    for (auto i : v2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}