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
#include <numeric>
using namespace std;

/**
 翻译
 */

int main() {

    map<string, int>::key_type v4; // string
    v4 = "hello"; // 赋值

    map<string, int>::value_type v5; // pair<const string, int>
    // v5 = make_pair("world", 10); // Error, const不能赋值

    return 0;
}