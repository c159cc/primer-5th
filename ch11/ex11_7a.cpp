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
#include <numeric>
using namespace std;

/**
> Define a map for which the key is the family's last name and the value is a
vector of the children's names. Write code to add new families and to add new
children to an existing family.

1. 从cin获取family

嫌弃它拖慢了我的进度就是负能量
感谢遇到了好用的方法就是正能量  心力
 */

int main() {
    map<string, vector<string>> family_children;

    for (string ln;
         cout << "cout family's last name: ", cin >> ln && ln != "@q";) {
        for (string cn;
             cout << "cout child's name: ", cin >> cn && cn != "@q";) {
            family_children[ln].push_back(cn);
        }
    }

    auto vec2Str = [](const vector<string> &vec) {
        return accumulate(vec.begin(), vec.end(), string());
    };
    for (const auto &[key, val] : family_children)
        cout << key << " -> " << vec2Str(val) << endl;

    return 0;
}