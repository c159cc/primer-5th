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

#include "ex13_47_String.h"
#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;

/**
> Given the copy constructor and copy-assignment operator in your String class
from exercise 13.44 in 13.5 a statement that prints a message each time the
function is executed.
 */
 
void test() {
    String s1("hello"); 
    String s2 = s1;
    String s3 = s2;
    s1 = s2;
    cout << "test() called" << endl;
}

int main() {
    test();
    return 0;
}