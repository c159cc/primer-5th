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
#include <numeric>
using namespace std;

/**

> In addition to 10.2.3 , the library defines function named unique_copy that
takes a third iterator denoting a destination into which to copy the unique
elements. Write a program that uses unique_copy to copy the unique elements from
a vector into an initially empty list.
 */

void printVec(const list<string> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}
bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    vector<string> ivec = {"hello", "world",  "apple", "apple",
                           "apple", "banana", "pear",  "grape"};

    stable_sort(ivec.begin(), ivec.end(), isShorter);
    list<string> list;
    auto last = unique_copy(ivec.begin(), ivec.end(), back_inserter(list));
    printVec(list);
    return 0;
}