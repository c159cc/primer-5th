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
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;

/**
> Using library function objects, determine whether a given int value is
divisible by any element in a container of ints.


1. 补充一个predicator
cc: 库函数可以当做普通函数使用, 接收参数返回值
 */

int main() {

    vector<int> v = {2, 26, 5, 7, 11};
    int n = 13;

    auto mod =  modulus<int>();
    auto predicator = [&](int i) { return 0 == mod(i, n); };
    // auto ct = count_if(v.begin(), v.end(), bind(modulus<int>(), placeholders::_1, n));

    auto is_divisible = any_of(v.begin(), v.end(), predicator);

    cout << "is_divisible=" << is_divisible << endl; 

    return 0;
}