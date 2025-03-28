
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Write three additional declarations for the function in the previous exercise.
One should use a type alias, one should use a trailing return , and the third
should use decltype. Which form do you prefer and why?
 */
#include <iostream>

string arr[10] = {"apple", "banana", "cherry",   "date", "elderberry",
                  "fig",   "grape",  "honeydew", "kiwi", "lemon"};
string (&get_array())[10] { return arr; }

decltype(arr) &get_array2() { return arr; }

auto get_array3() -> string (&)[10] { return arr; }
int main() {

    string *ps = get_array();
    for (int i = 0; i < 10; i++) {
        cout << ps[i] << " ";
    }
    cout << endl;

    string (&arr2)[10] = get_array2();
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    string (&arr3)[10] = get_array3();
    for (int i = 0; i < 10; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}