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
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
#include <unordered_set>

#include "ex16_62_Salesdata.h"
using namespace std;
/**
> Define a function template to count the number of occurrences of a given value
in a vector. Test your program by passing  it a vector of doubles, a vector of
ints, and av vector of strings.

 */

template <typename T> int count_occurrences(const vector<T> &vec, T value) {
    int count = 0;
    for (const auto &elem : vec) {
        if (elem == value) {
            ++count;
        }
    }
    return count;
};

template <>
int count_occurrences(const vector<const char *> &vec, const char *str) {
    int count = 0;
    for (const auto &elem : vec) {
        if (strcmp(elem, str) == 0) {
            ++count;
        }
    }
    return count;
};

int main() {
     vector<const char*> vec{"hello", "world", "hello", "world"};

     cout << count_occurrences(vec, "hello") << endl; // expected output: 2
    return 0;
}


