
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
#define NDEBUG

int main() {
    string s, sought = "hello";
    while (cin >> s && s != sought) {
    }
    assert(cin);

    return 0;
}