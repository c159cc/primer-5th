#include "ex12_22.h"
using namespace std;

/**
> Write a program that reads a string from the standard input into a dynamically
allocated character array. describe how your program handles varying size
inputs. Test your program by giving it a string of data that is longer than the
array size you'va allocated.
 */

int main() {
 
    char *str = new char[10];
    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    for(int i = 0; i < input.length() && i < 10; i++) {
        str[i] = input[i];
    }

    str[input.length()] = '\0';
    cout << "The string entered is: " << str << endl;

    delete[] str;

    return 0;
}