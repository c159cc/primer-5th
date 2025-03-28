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
> Write a function that takes a string representing a name and two other strings
representing a prefix, such as "Mr." or "Ms." and a suffix, such as "Jr." or
"|||". Using iterators and the insert and append functions, generate and return
a new string with the suffix and prefix added to the given name.
 */

string add_prefix_suffix(string name, const string &prefix,
                         const string &suffix) {
    string res = prefix + " " + name + " " + suffix;
    return res;
}

int main() {
    string res = add_prefix_suffix("John", "Mr.", "Jr.");
    cout << res << endl;
    return 0;
}