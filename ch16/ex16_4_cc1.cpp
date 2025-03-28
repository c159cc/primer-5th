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
using namespace std; 
/**
> Write a template that acts like the library find algorithm. The function will
need two template type parameters, one to represent the functions iterator
parameter and the other for the type of the value. Use your function to find a
given value in a vector<int> and in a list<string>

1. 简化代码
 */

template <typename Iterator, typename T>
Iterator find2(Iterator first, Iterator last, const T &value) {
 

    while(first != last&&*first!=value)
        ++first;

    return first;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    list<string> l = {"hello", "world", "cpp"};
    auto it = find2(v.begin(), v.end(), 5);
    auto it2 = find2(l.begin(), l.end(), "world");

    if (it != v.end())
        cout << "Found " << *it << " in vector" << endl;

    if (it2 != l.end())
        cout << "Found " << *it2 << " in list" << endl;
    return 0;
}