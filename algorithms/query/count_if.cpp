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
 * count_if(beg, end, unaryPred); // 返回数量
 */

int main() {
    vector<int> v = {1, 2, 4, 4, 3, 4, 5, 6, 7, 8, 9, 10};
    auto val = count_if(v.begin(), v.end(), [](int i) { return i > 3 && i < 6; }); // 4个 
    cout << "val = " << val << endl; // 4
 


    return 0;
}