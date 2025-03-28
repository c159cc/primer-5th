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
 * shuffle(beg, end, Uniform_rand);
 */

int main() {
    vector<int> v = { 3, 1, 4,   5, 9, 2, 6, 5, 3, 5};

    swap(v[0], v[1]);
    

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl; 
    return 0;
}