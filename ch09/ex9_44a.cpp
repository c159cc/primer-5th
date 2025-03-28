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
> Rewrite the previous function using an index and replace.

1. 第一个字符相等之后才substr把
2.  -1逻辑复杂
 */

void myReplace(string &s, const string &oldVal, const string &newVal) {
    for (size_t i = 0; i < s.size();) {
        if (s[i] == oldVal[0] && s.substr(i, oldVal.size()) == oldVal) {
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size(); // adjust index for the replacement
        } else
            ++i;
    }
}

int main() {

    string s = "I hope you'll thru thru my way";
    string oldVal = "thru";
    string newVal = "through";
    myReplace(s, oldVal, newVal);
    cout << s << endl; // I hope you'll through my way

    return 0;
}