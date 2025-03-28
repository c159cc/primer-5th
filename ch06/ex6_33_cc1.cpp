
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Write a recursive function to print the contents of a vector.
 */
#include <iostream>

void recur(vector<int>::const_iterator beg, vector<int>::const_iterator end) {
    if (beg == end)
        return;
    cout << *beg << " ";
    recur(++beg, end);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    recur(v.cbegin(), v.cend());
}