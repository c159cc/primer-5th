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
#include <functional>
#include <numeric>
using namespace std;

/**

> Use bind and check_size to find the first element in a vector of ints that has
a value greater than the length of a specified string value.

 */

void printVec(const vector<string> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}

bool check_size(const string &s, string::size_type sz) {
    return s.size() < sz;
}

int main() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    string s = "hello";

    bind(check_size, s, placeholders::_1);
    auto iter =
        find_if(ivec.cbegin(), ivec.cend(), bind(check_size, s, placeholders::_1));

    if (iter != ivec.cend())
        cout << "Found element: " << *iter << endl;

    return 0;
}
