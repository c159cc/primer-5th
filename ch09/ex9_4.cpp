#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/**
> Write a function that takes a pair of iterators to a vector<int> and int
value. Look for that value in the range and return a bool indicating whether it
was found.

 */

bool findValue(vector<int>::const_iterator first,
               vector<int>::const_iterator last, int value) {
    while (first != last) {
        if (*first == value)
            return true;
        first++;
    }
    return false;
}

int main() {

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::const_iterator first = vec.cbegin();
    vector<int>::const_iterator last = vec.cend();
    int value = 5;
    bool found = findValue(first, last, value);
    if (found) {
        cout << "Value found" << endl;
    } else {
        cout << "Value not found" << endl;
    }
    return 0;
}
