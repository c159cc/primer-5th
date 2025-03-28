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
 * accumulate(beg, end, init, binaryOp); // 顺序
 */

int main() {
    vector<int> v1 = {1, 2, 4, 4, 5, 4, 5, 6, 7, 10, 3, 3, 4, 8, 15};  
    int sum1 =
        accumulate(v1.begin(), v1.end(), 10, [](int a, int b) { return a+1; });

    cout << "sum1: " << sum1 << endl; // 25

    return 0;
}