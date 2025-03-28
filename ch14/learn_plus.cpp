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
 * > Using library function objects and adaptors , define an expression to
(a) Count the number of values that are greater than 1024
(b) Find the first string that is not equal to pooh
(c) Multiply all values by 2

 */
int main() {

    vector<int> v = {1112, 2331, 3, 4, 5, 6, 7, 8, 9, 10};
    auto count = count_if(v.begin(), v.end(),
                          bind(greater<int>(), placeholders::_1, 1024));
    cout << "Count of values greater than 1024: " << count << endl;

    vector<string> s = {"pooh", "pooh", "cherry", "date", "elderberry"};
    auto it = find_if(s.begin(), s.end(),
                      bind(not_equal_to<string>(), placeholders::_1, "pooh"));
    if (it == s.end()) {
        cout << "No non-pooh string found." << endl;
    } else {
        cout << "First non-pooh string: " << *it << endl;
    }

    vector<int> v2 = {1, 2, 3, 4, 5};
    transform(v2.begin(), v2.end(), v2.begin(),
              bind(multiplies<int>(), placeholders::_1, 2));
    for (auto i : v2) {
        cout << i << " ";
    }
    cout << endl;

    
    return 0;
}