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
> In 16.3 we defined overloaded two versions of debug_rep one had a const char*
and the other a char* parameter. Rewrite these functions as specializations.

 */

template <typename T> string debug_rep(T *t);

template <> string debug_rep(const char *t);
template <> string debug_rep(char *t);

int main() {

    char p[] = "hello world";
    cout << debug_rep(p) << endl;      // "hello world"
    cout << debug_rep("你好") << endl; // "pointer: 0"
    return 0;
}

template <typename T> string debug_rep(T *t) {
    ostringstream ret;
    ret << "pointer: " << t;
    return ret.str();
}

template <> string debug_rep(const char *t) {
    cout << "const char*" << endl;
    return '"' + string(t) + '"';
}

template <> string debug_rep(char *t) {
    cout << "char*" << endl;
    return '"' + string(t) + '"';
}