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
> Write a program to find and remove the odd-valued elements in a
forward_list<int>.
 */

// 需求在所有的3前面插入6

int main() {
    forward_list<int> flst = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto it = flst.begin(), prev = flst.before_begin();
         it != flst.end();) {
        if (*it & 1) {
            it = flst.erase_after(prev);
        } else {
            prev = it;
            ++it;
        }
    }

    for (auto x : flst)
        cout << x << " ";
    cout << endl;
    return 0;
}