
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

void recur(const vector<int> &v, size_t i) {
    if (i == v.size()) {
        return;
    }

    cout << v[i] << " ";
    recur(v, i + 1);
}
int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    recur(v, 0);
}