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
 * find(beg, end, val)  找到第一个等于val的元素, 返回it
 */
int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = find(v.begin(), v.end(), 5);
    if (it != v.end()) {
        cout << "found " << *it << endl;
        cout<<"next is "<<*(it+1)<<endl;
    }

    auto it2 = find(v.begin(), v.end(), 11);
    if (it2 != v.end()) {
        cout << "found " << *it2 << endl;
    } else {
        cout << "not found 11" << endl;
    }

    // found 5, not found 11
    return 0;
}