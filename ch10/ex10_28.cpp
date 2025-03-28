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

> Copy a vector that holds the values from 1 to 9 inclusive, into three other
containers. Use an inserter, a back_inserter, and a front_inserter, respectively
to add elements to there containers. Predict how the output sequence varies by
the kind of inserter and verify your predications by running your programs.

 */

void printVec(const list<int> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}
bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    list<int> v1;
    copy(ivec.begin(), ivec.end(), back_inserter(v1));
    cout << "v1: ";
    printVec(v1);
    list<int> v2;
    copy(ivec.begin(), ivec.end(), front_inserter(v2));
    cout << "v2: ";
    printVec(v2);
    list<int> v3;
    copy(ivec.begin(), ivec.end(), inserter(v3, v3.begin()));
    cout << "v3: ";
    printVec(v3);

    return 0;
}