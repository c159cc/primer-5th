#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <list>
using namespace std;

/**
> Write a program to assign the elements from a list of char* pointers to
C-style character strings to a vector of strings.
 */

int main() {

    list<const char*> char_ptr_list = {"hello", "world", "how", "are", "you"};
    vector<string> str_vec;
    for (const char *ptr : char_ptr_list) {
        str_vec.push_back(ptr);
    }

    for (string str : str_vec) {    
        cout << str << endl;
    }

    return 0;
}
