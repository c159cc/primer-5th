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

> Write a lambda that captures an int from its enclosing function and takes an
int parameter. The lambda should return the sum of the captured int and the int
parameter.

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

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);

    stable_sort(words.begin(), words.end(), isShorter);

    // 找到大于sz的
    auto iter = find_if(words.begin(), words.end(),
                        [sz](const string &s) { return s.size() > sz; });

    cout << "count=" << distance(iter, words.end()) << endl;
    // 打印大于sz的

    for_each(  iter, words.end(), [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main() {
    vector<string> words = {"hello",  "world", "apple",
                            "banana", "pear",  "grape"};

    biggies(words, 5);
    return 0;
}