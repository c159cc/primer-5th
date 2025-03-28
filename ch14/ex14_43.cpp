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
> Using library function objects, determine whether a given int value is
divisible by any element in a container of ints.
 */

int main() {

    vector<int> v = {2, 26, 5, 7, 11};
    int n = 13;

    auto ct =
        count_if(v.begin(), v.end(), bind(modulus<int>(), placeholders::_1, n));
    cout << "ct=" << ct << endl;

    return 0;
}