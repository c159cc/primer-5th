#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/**
> Rewrite the previous program to return an iterator to the requested element.
Note that the program must handle the case where the element is not found.

 */

vector<int>::const_iterator &findValue(vector<int>::const_iterator &first,
                                       vector<int>::const_iterator &last,
                                       int value) {
    while (first != last) {
        if (*first == value)
            return first;
        first++;
    }
    return last;
}

int main() {

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::const_iterator first = vec.cbegin();
    vector<int>::const_iterator last = vec.cend();
    int value = 5;
    auto found = findValue(first, last, value);
    if (found != last) {
        cout << "Value found" << endl;
    } else {
        cout << "Value not found" << endl;
    }
    return 0;
}
