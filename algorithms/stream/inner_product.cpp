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
 * inner_product(beg1, end1, beg2, init); // 两个序列乘积之和
 */

int main() {
    vector<int> v1 = {1, 2, 4};
    vector<int> v2 = {1, 2, 4, 4};

    auto sum =
        inner_product(v1.begin(), v1.end(), v2.begin(), 0); // 两个序列乘积之和

    cout << "sum=" << sum << endl;

    return 0;
}