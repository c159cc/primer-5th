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
 * min_element(beg, end);
 */

int main() {
    vector<int> v1 = {1, 2, 4, 6, 6, 6, 8, 9, 10};

    vector<int>::iterator r = min_element(v1.begin(), v1.end());

    if (r != v1.end())
        cout << "The minimum element is: " << *r << endl;
    else cout << "There is no minimum element in the vector." << endl; // 1
    return 0;
}