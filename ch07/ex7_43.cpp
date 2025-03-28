#include "ex7_41.h"
#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
> Assume we have a class named NoDefault that has a constructor that takes an
int, but has no default constructor. Define a class C that has a member of type
NoDefault. Define the default constructor for C.
 */

struct NoDefault{
    NoDefault(int i) : num(i) {}
    int num;
};

struct C {
    C(){};
    NoDefault nd=100;
};

int main() {
    cout << "Hello, world!" << endl;
    C c;
    cout << c.nd.num << endl;

    return 0; }