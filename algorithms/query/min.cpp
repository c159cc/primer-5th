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
 * min(val1, val2); // val
 */

int main() {
    vector<int> v1 = {1, 2, 4, 6, 6, 6, 8, 9, 10};

    int r = min(2, 1);
    cout<<"Min(2, 1) = "<<r<<endl; // 1

    int r2 = min({5, 6, 2});
    cout<<"Min({5, 6, 2}) = "<<r2<<endl; // 2
    return 0;
}