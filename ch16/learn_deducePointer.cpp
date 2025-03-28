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

int globalVal = 42;
template <int *p> void f() { cout << *p << endl; }

string ss = "hello";

template <int &p> void f2() { cout << p << endl; }

int main() {
    // f<&globalVal>();
    f2<globalVal>();

    return 0;
}