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
 * count(beg, end, val);  统计val出现的次数,返回数量
 */

int main() {
    vector<int> v = {1, 2, 4, 4, 3, 4, 5, 6, 7, 8, 9, 10};
    auto val = count(v.begin(), v.end(), 4);
     
    cout << "val = " << val << endl; // 3
 


    return 0;
}