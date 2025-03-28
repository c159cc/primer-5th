
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Write the declaration for a function that returns a reference to an array of
ten strings, without using either a trailing return , decltype, or a type alias.
 */
#include <iostream>

string arr[10] = {"apple", "banana", "cherry",   "date", "elderberry",
                  "fig",   "grape",  "honeydew", "kiwi", "lemon"};
string (&get_array())[10] { return arr; }

int main() {

    string *ps = get_array();
    for (int i = 0; i < 10; i++) {
        cout << ps[i] << endl;
    }

    return 0;
}