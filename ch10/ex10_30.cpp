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
#include <iterator>
#include <numeric>
using namespace std;

/**


> Use stream iterators, sort, and copy to read a sequence of integers from the
standard input, sort them , and then write them back to the standard output.
 */

void printVec(const list<int> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}

 

int main() {

    vector<int> ivec;
    istream_iterator<int> in_iter(cin), eof;
    copy(in_iter, eof, back_inserter(ivec));

    sort(ivec.begin(), ivec.end());

    ostream_iterator<int> out_iter(cout, " ");
    copy(ivec.begin(), ivec.end(), out_iter);

    return 0;
}