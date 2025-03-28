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
    char ca1[] = "hello", ca2[] = "he";
    char ca3[8];
    strcpy(ca3, ca1);
    strcat(ca3, ca2);
    cout << "ca3=>" << ca3 << endl;

    return 0;
}
