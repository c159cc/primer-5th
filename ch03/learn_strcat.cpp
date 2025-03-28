#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    char ca1[] = "Hello";

    char ca2[100];
    strcpy(ca2, ca1);

    strcat(ca2, " ");

    // char ca3[2] = {'a', 0};
    char ca3[2] = {'a', '\0'};
    strcat(ca2, ca3);

    cout << "after add space ca2len=" << ca2 << endl; // 6
    return 0;
}