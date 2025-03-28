#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
using namespace std;

/**
 Write a function that takes a forward_list<string> and two additional string
 arguments. The function should find the first string and insert the second
 immediately following the first. If the first string is not found, then insert
 the second string at the end of the list.

 1, it的作用域隐藏起来比较优雅
 2, prev的赋值和it的递增结合起来更间接
 */

void insert_string(forward_list<string> &flst, const string &s1,
                   const string &s2) {
    auto prev = flst.before_begin();
    for (auto it = flst.begin(); it != flst.end(); prev = it++) {
        if (*it == s1) {
            flst.insert_after(it, s2);
            return;
        }
    }

    flst.insert_after(prev, s2);
}

int main() {
    forward_list<string> flst = {"apple", "banana", "cherry", "date"};
    insert_string(flst, "apple1", "chencheng");
    for (auto &s : flst)
        cout << s << " ";
    cout << endl;
    return 0;
}