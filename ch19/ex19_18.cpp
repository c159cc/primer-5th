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
#include <bitset>
#include <cctype>
#include <functional>
#include <iomanip>
#include <map>
#include <memory>
#include <numeric>
#include <random>
#include <regex>
#include <set>
using namespace std;
/**
> Write a function that uses count_if to count how many empty strings there are in a given vector.

 */
 
int count_empty_strings(const vector<string>& vec) {
    return count_if(vec.begin(), vec.end(), [](const string& s) { return s.empty(); });
}

int count_empty_strings2(const vector<string>& lst) {
    auto f = function<bool(const string&)>(&string::empty);
    return count_if(lst.begin(), lst.end(), f);
}
int count_empty_strings3(const vector<string> &lst) {
    auto f2 = [](const string &s) -> bool { return s.empty(); };
    auto f = function<bool(const string &)>(f2);
    return count_if(lst.begin(), lst.end(), f);
}
int count_empty_strings_mem_fn(const vector<string> &lst) { 
    return count_if(lst.begin(), lst.end(), mem_fn(&string::empty));
}
int count_empty_strings_bind(const vector<string> &lst) {
    return count_if(lst.begin(), lst.end(), bind(&string::empty, placeholders::_1));
}
int main() {
    vector<string> vec = {"hello", "", "world", "", "!"};
    cout << count_empty_strings(vec) << endl; // Output: 2

    cout << count_empty_strings2(vec) << endl; // Output: 2
    cout << count_empty_strings3(vec) << endl; // Output: 2
    cout << "count_empty_strings_mem_fn: " << count_empty_strings_mem_fn(vec)
         << endl;                                    // Output: 2
    cout << "count_empty_strings_bind: "<< count_empty_strings_bind(vec)
         << endl; // Output: 2

    return 0;
}