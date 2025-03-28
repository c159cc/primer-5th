#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
/**
> Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.
 */

int main()
{

    string str1 = "hello", str2 = "he";
    const char *cstr1 = "hello", *cstr2 = "he";

    cout << "(str1 < str2)" << (str1 < str2) << endl;                // false
    cout << "strcmp(cstr1, cstr2) " << strcmp(cstr1, cstr2) << endl; // 1
    return 0;
}
