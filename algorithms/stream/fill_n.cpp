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
    fill_n(dest, cnt, val);
 */

int main() { 
    vector<int> v2(12);

    fill_n(v2.begin(), 3, 42);
    for (auto i : v2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}