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
> Write a program to read a seqnihuence of strings from the standard input into
a deque. Use iterators to write a loop to print the elements in the deque.
 */

int main() {

    deque<string> dq;
    string s;
    while (cin >> s) {
        dq.push_back(s);
    }

    for (auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}