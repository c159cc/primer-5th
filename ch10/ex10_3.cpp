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
#include <numeric>
using namespace std;

/**
> Use accumulate to sum the elements in a vector<int>.
 */

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int sum = accumulate(v.cbegin(), v.cend(), 0);
    cout << sum << endl; // output: 15
    return 0;
}