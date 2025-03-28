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

> In the exercises for 10.3.2 you wrote a version of biggies that uses partition
. Rewrite that function to use check_size and bind.

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

bool check_size(const string &s, string::size_type sz) { return s.size() < sz; }

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);

    stable_sort(words.begin(), words.end(), isShorter);

    // 找到大于sz的
    auto iter = partition(words.begin(), words.end(),
                          bind(check_size, placeholders::_1, sz));

    cout << "count=" << distance(iter, words.end()) << endl;
    // 打印大于sz的

    for_each(iter, words.end(), [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main() {
    vector<string> words = {"hello",  "world", "apple",
                            "banana", "pear",  "grape"};

    biggies(words, 5);
    return 0;
}