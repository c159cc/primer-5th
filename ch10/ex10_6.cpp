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

> Using fill_n, write a program to set a sequence of int values to 0.
 */

int main() {
    vector<int> ivec;

    fill_n(back_inserter(ivec), 10, 0);

    cout << "ivec: "<<ivec.size()<<endl;
    return 0;
}