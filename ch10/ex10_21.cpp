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
 * 
> Write a lambda that capture a local int variable and decrements that variable
until it reaches 0. Once the variable is 0 additional calls should no longer
decrement the variable. The lambda should return a bool that indicates whether
the captured variable is 0.

 */
 
int main() {
    int i = 10;

    auto check_and_decrement = [&i] { return i > 0 ? !--i : !i; };
    while (!check_and_decrement()) {
        cout << i << endl;
    }
    return 0;
}