
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Write a function to swap two int pointers.
 */
#include <iostream>

string concat(const char* s1, const char* s2 ) {
    string str1(s1);
    string str2(s2);
    str1 += str2;
    return str1; 
}
int main() {
     cout << concat("Hello", " World") << endl;

    return 0;
}