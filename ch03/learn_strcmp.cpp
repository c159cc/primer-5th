#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    char ca1[] = "aaa";

    char ca2[] = "bbb";

    if (strcmp(ca1, ca2) < 0) {
        cout << "ca1 is less than ca2" << endl;
    } else {
        cout << "ca1 is greater than or equal to ca2" << endl;
    }
    return 0;
}