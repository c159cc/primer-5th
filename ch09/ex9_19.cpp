#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <list>
using namespace std;

/**
> Rewrite the program from the previous exercise to use a list. List the changes
you needed to make.
 */

int main() {

    list<string> list;
    string s;
    while (cin >> s) {
        list.push_back(s);
    }

    for (auto it = list.begin(); it != list.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}