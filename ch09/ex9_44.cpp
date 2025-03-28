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


 */

void myReplace(string &s, const string &oldVal, const string &newVal) {
    for (size_t i = 0; i < s.size(); ++i){
        if (s.substr(i, oldVal.size()) == oldVal) {
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size() - 1; // adjust index for the replacement
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