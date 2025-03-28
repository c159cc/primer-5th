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
 * is_sorted_until(beg, end);
 */

int main() {
    vector<int> v = {1,2, 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}; 
    
    auto it = is_sorted_until(v.begin(), v.end());
    auto dis = distance(v.begin(), it);
    cout << "dis = " << dis << endl; //3

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}