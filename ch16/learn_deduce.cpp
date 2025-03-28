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
>  字符串字面量会自动转化为const char*吗?
 */
template <typename T> string debug_rep(const T &t) {
    ostringstream ret;
    ret << t;
    return ret.str();
}
template <typename T> string debug_rep(T *p) {
    ostringstream ret;
    ret << "pointer: " << p;
    if (p)
        ret << " " << debug_rep(*p);
    else
        ret << "null pointer";

    return ret.str();
}

int main(){

    debug_rep("holle");
    return 0;
}