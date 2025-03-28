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
 * binary_search(beg, end, val, comp); // 需要提供小于号
 */

int main() {
    vector<int> v1 = {1, 2, 4,   8, 9, 10};   
    auto res = binary_search(v1.cbegin(), v1.cend(), 4, [](int a, int b){
        return a < b;
    });
    cout <<"res:"<< boolalpha << res << endl; // true

    return 0;
}