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
 * move(beg, end, dest); //  元素移动
 */

int main() {
    vector<int> v1 = {1, 2, 4, 4, 3, 4, 5, 6, 7, 4, 3, 3, 4, 8, 9, 10};
    vector<int> v2(16);
    v2[0] = 9;
    v2[1] = 9;
    v2[2] = 9;

    move(v1.begin(), v1.begin()+4, back_inserter(v2));

    for (auto i : v2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}