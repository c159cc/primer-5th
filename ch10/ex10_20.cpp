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

> The library defines an algorithm named count_if. Like find_if, this function
takes a pair of iterators denoting an input range and a predicate that it
applies to each element in the given range . count_if returns a count of how
often the predicate is true. Use count_if to rewrite the portion of our program
that counted how many words are greater than length 6.

 */

void printVec(const vector<string> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}

int biggerThan6(const vector<string> &svec) {
    int cnt =
        count_if(svec.begin(), svec.end(), [](const string& str) { return str.size() > 6; });
    return cnt;
}

int main() {
    vector<string> words = {"hello",  "world", "apple",
                            "banana_123", "pear",  "grape"};

    cout<<biggerThan6(words)<<endl; // output: 2
    return 0;
}