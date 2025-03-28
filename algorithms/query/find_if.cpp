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
 * find(beg, end, unaryPred)  找到第一个unaryPred为true的元素, 返回it
 */
bool find6(int val) { return val == 6; };

class Find6{
    public:
        bool operator()(int val) { return val == 6; }
};

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = find_if(v.begin(), v.end(), [](auto val){return val==6;});
    if (it != v.end()) {
        cout << "found " << *it << endl;
        cout<<"next is "<<*(it+1)<<endl;
    }

    auto it2 = find_if(v.begin(), v.end(),   [](auto val) { return val == 11; });
    if (it2 != v.end()) {
        cout << "found " << *it2 << endl;
    } else {
        cout << "not found 11" << endl;
    }

    // found 6, next is 7,  not found 11

    // unaryPred有几种格式
    // lambda, 函数, 可调用类的对象, 库函数
    auto it3 = find_if(v.begin(), v.end(), find6);
    cout << "found it3 " << *it3 << endl;

    // 可调用类对象
    Find6 f6;
    auto it4 = find_if(v.begin(), v.end(), f6);
    cout << "found it4 " << *it4 << endl;

    // 库函数
    auto it5 = find_if(v.begin(), v.end(), bind(equal_to<int>(), 6, placeholders::_1));
    cout << "found it5 " << *it5 << endl;


    return 0;
}