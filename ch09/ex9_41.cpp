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
> Write a program that initializes a string from a vector<char>.
 */

int main() {
 
    vector<char> v = {'h', 'e', 'l', 'l', 'o'};
    string s(v.begin(), v.end());
    cout << s << endl; // output: hello
    return 0;
}