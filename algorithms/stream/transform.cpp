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
 * transform(beg, end, dest, unaryOp); // 需要dest参数, 最后一个参数为unaryOp
 */

int main() {
    vector<int> v1 = {1, 2, 4, 4, 3, 4, 5, 6, 7, 4, 3, 3, 4, 8, 9, 10};
    vector<int> v2;

    transform(v1.begin(), v1.end(), back_inserter(v2), [](int x) { return x * 2; });
    for (auto i : v2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}