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
> Extend the map of children to their family name that you wrote for the
exercise in 11.2.1 by having the vector store a pair that holds a child's name
and birthday.


1. 从cin获取family

嫌弃它拖慢了我的进度就是负能量
感谢遇到了好用的方法就是正能量  心力
 */

int main() {
    map<string, vector<pair<string, string>>> family_children;

    for (string ln;
         cout << "cout family's last name: ", cin >> ln && ln != "@q";) {
        for (string cn, birth;
             cout << "cout child's name: ", cin >> cn >> birth && cn != "@q";) {
            family_children[ln].emplace_back(cn, birth);
        }
    }

    auto vec2Str = [](const vector<pair<string, string>> &vec) {
        return accumulate(vec.begin(), vec.end(), string(),
                          [](const string &a, const pair<string, string> &b) {
                              return a + ", " + b.first + " " + b.second;
                          });
        };
    for (const auto &[key, val] : family_children)
        cout << key << " -> " << vec2Str(val) << endl;

    return 0;
}