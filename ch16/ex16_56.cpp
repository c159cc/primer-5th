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
> Write and test a variadic version of errorMsg.
 */
// always declare first:
template <typename T> std::string debug_rep(const T &t);
template <typename T> std::string debug_rep(T *p);

std::string debug_rep(const std::string &s);
std::string debug_rep(char *p);
std::string debug_rep(const char *p);
// print pointers as their pointer value, followed by the object to which the
// pointer points
template <typename T> std::string debug_rep(T *p) {
    std::ostringstream ret;
    ret << "pointer: " << p;

    if (p)
        ret << " " << debug_rep(*p);
    else
        ret << " null pointer";

    return ret.str();
}

// non-template version
std::string debug_rep(const std::string &s) { return '"' + s + '"'; }
// print any type we don't otherwise.
template <typename T> std::string debug_rep(const T &t) {
    std::ostringstream ret;
    ret << t;
    return ret.str();
}
std::string debug_rep(char *p) { return debug_rep(std::string(p)); }

std::string debug_rep(const char *p) { return debug_rep(std::string(p)); }
template <typename T, typename... Args> 
std::ostream &print(std::ostream &os, const T &t) {
     return os << t;
     //           ^
     // note: no seperator after the last element in the pack
 }

 // this version of print will be called for all but the last element in the
 // pack
 template <typename T, typename... Args>
 std::ostream &print(std::ostream &os, const T &t, const Args &...rest) {
     // print the first argument
     os << t << ",";

     // recursive call; print the other arguments
     return print(os, rest...);
 }

template <typename... Args> string errorMsg(ostream &os, Args &&...args) {
    return print(os,  args...);
};

int main() {
    errorMsg(cout, 1, 2, string("hello"));
    return 0;
}