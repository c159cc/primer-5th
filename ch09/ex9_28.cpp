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

 */

void insert_string(forward_list<string> &flst, const string &s1,
                   const string &s2) {
    auto it = flst.begin(), prev = flst.before_begin();
    for (; it != flst.end(); ++it) {
        if (*it == s1) {
            flst.insert_after(it, s2);
            return;
        }
        prev = it;
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