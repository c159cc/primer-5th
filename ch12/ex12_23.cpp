#include "ex12_22.h"
using namespace std;

/**
> Write a program to concatenate two string literals , putting the result in a
dynamically allocated array of char. Write a program to concatenate two library
strings that have the same value as the literals used in the first program.
 */

int main() {
    const char* s1 = "Hello, ";
    const char* s2 = "world!";
    
    char *result = new char[strlen(s1) + strlen(s2) + 1];
    strcpy(result, s1);
    strcat(result, s2); 
    cout << result << endl;

    string s3 = "Hello, ";  
    string s4 = "world!";
    string s5 = s3 + s4;
    cout << s5 << endl;

    delete[] result;

    return 0;
}