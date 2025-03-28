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

> Write a program that uses stable_sort and isShorter to sort a vector passed to
your version of elimDups. Print the vector to verify that your program is
correct.
 */

void printVec(const vector<string> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}
bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}


void elimDups(vector<string> &ivec) {
    stable_sort(ivec.begin(), ivec.end(), isShorter);
    auto last = unique(ivec.begin(), ivec.end());
    ivec.erase(last, ivec.end());
}

int main() {
    vector<string> v = {"apple2", "apple1", "cherry_", "apple1", "date"};
    sort(v.begin(), v.end());
    elimDups(v);

    printVec(v); // prints "apple1 cherry_ date apple2"

    return 0;
}