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
 * equal_range(beg, end, val, comp); //
 */

int main() {
    vector<int> v1 = {1, 2, 4, 6, 6, 6, 8, 9, 10};
    auto it1 = equal_range(v1.cbegin(), v1.cend(), 6, [](int a, int b){
        return a <b;
    });

    cout << "first=" << *(it1.first)
         << " distance=" << distance(v1.cbegin(), it1.first) << endl; // 6. 3
    cout << "second=" << *(it1.second)
         << " distance=" << distance(v1.cbegin(), it1.second) << endl; // 8. 6

    return 0;
}