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
> Reimplement the program that eliminated duplicate words that we wrote
in 10.2.3 to use a list instead of a vector.

 */

int main() {
    list<int> ilst;

    fill_n(back_inserter(ilst), 10, 0);

    cout << "ilst: " << ilst.size() << endl;
    return 0;
}