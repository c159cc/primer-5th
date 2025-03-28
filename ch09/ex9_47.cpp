#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
using namespace std;

/**
> Write a program that finds each numeric character and then each alphabetic
character in the string "ab2c3d7R4E6". Write tow versions of the program. The
first should use find_first_of, and the second should use find_first_not_of.
 */

int main() {
    string numbers = "0123456789", name = "ab2c3d7R4E6";
    string::size_type idx = 0;
    // Using find_first_of
    for (; (idx = name.find_first_of(numbers, idx)) != string::npos; idx++) {
        cout << "Numeric character found at index " << idx
             << " value: " << name[idx] << endl;
    }

    return 0;
}