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
 * merge(beg1, end1, beg2, end2, dest);
 */

int main() {
    vector<int> v1 = {1,   3,  5};
    vector<int> v2={2,4};

    vector<int> v3 ;
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3));

    for (auto i : v3) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}