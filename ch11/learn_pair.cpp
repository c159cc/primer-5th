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
    pair<int, int> p1{1, 2};

    pair<const int, int> p2={1, 2};

    p1 = p2;
    // p2 = p1; // error: assignment of read-only variable ‘p2’

    pair<const int, int> p3 = p1;
    return 0;
}