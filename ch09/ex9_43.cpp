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
> Write a function that takes three strings, s, oldVal, and newVal. Using
iterators, and the insert and erase  functions replace all instances of oldVal
that appear in s by newVal. Test your function by using it to replace common
abbreviations, such as "tho" by "though" and "thru" by "through".

 */

void myReplace(string &s, const string &oldVal, const string &newVal) {
    for (auto it = s.begin(); it != s.end();) {
        if (oldVal == string(it, it + oldVal.size())) {
            s.erase(it, it + oldVal.size());
            s.insert(it, newVal.begin(), newVal.end());
            it += newVal.size();
        } else {
            ++it;
        }
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