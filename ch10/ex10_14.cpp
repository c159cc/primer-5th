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

> Write a lambda that takes two ints and returns their sum.

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

bool my_partition(const string &s) {
    if (s.size() < 5)
        return true;

    return false;
}

int main() {
    auto f = [](int x, int y) { return x + y; };
    cout << f(2, 3) << endl;
    return 0;
}