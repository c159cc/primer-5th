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

> The library defines an algorithm named partition that takes a predicate and
partitions the container so that values for which the predicate is true appear
in the first part and those for which the predicate is false appear in the
second part. The algorithm returns an iterator just past the last element for
which the predicate returned true. Write a function that takes a string and
returns a bool indicating whether the string has five characters or more. Use
the function to partition words. Print the elements that have five or more
characters.

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
    vector<string> svec{"apple",      "banana", "cherry", "date",
                        "elderberry", "fig",    "grape"};
    auto it = partition(svec.begin(), svec.end(), my_partition);
    for (; it != svec.end(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}