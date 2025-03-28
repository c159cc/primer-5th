
#include "Chapter6.h"
#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/**
 * > Explain what this loop does and whether it is a good use of assert:
 */ 

int main() {
    int func(int, int);
    using pf2 = int(*)(int, int);
    typedef int (*pf3)(int, int);
    using pf4 = int(int, int);

    vector<decltype(func) *> v;
    vector<pf2> v2; 
    vector<pf3> v3;
    vector<pf4*> v4;

    return 0;
}