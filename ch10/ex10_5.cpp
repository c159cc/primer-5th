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
> In the call to equal on rosters, what would happen if both rosters held
C-style strings, rather that library strings?
 */

int main() {
    vector<const char*> roster1 = {"Alice", "Bob", "Charlie"};
    vector<const char*> roster2 = {"Alice", "Bob", "Charlie1"};

    auto result =
        equal(roster1.begin(), roster1.end(), roster2.begin()); // true
    cout << boolalpha << result << endl;                        // true
    return 0;
}