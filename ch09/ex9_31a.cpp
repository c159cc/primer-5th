#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
using namespace std;

/**
> The program on page 354 to remove even-valued elements and duplicate odd ones
will not work on a list or forward_list. Why? Revise the program so that it
works on these types as well.
    // silly loop to remove even-valued elements and insert a duplicate of
    // odd-valued elements
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
            iter += 2;
        } else
            iter = vi.erase(iter);
    }
 */

int main() {
    forward_list<int> ilst = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = ilst.begin(), prev = ilst.before_begin();
    while (iter != ilst.end()) {
        if (*iter % 2) {
            iter = ilst.insert_after(iter, *iter);
            prev = iter++;
        } else
            iter = ilst.erase_after(prev);
    }

    for (auto i : ilst)
        cout << i << " ";
    cout << endl;
    return 0;
}