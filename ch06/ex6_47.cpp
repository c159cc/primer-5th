
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
// To turn off debugging, uncomment the following line, or compile the program
// with '-D NDEBUG' switch
#define NDEBUG
 

void printVec(vector<int> &vec) {
#ifndef NDEBUG
    cout << "vector size: " << vec.size() << endl;
#endif
    if (!vec.empty()) {
        auto tmp = vec.back();
        vec.pop_back();
        printVec(vec);
        cout << tmp << " ";
    }
}

int main() {
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    printVec(vec);
    cout << endl;

    return 0;
}