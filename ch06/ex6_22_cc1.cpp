
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Write a function to swap two int pointers.
 */
#include <iostream>

void swap(int *&a, int *&b) {
    int *temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 5, y = 10;
    int *px = &x, *py = &y;
    cout << "Before swap: px = " << px << ", py = " << py << endl;
    swap(px, py);
    cout << "After swap: px = " << px << ", py = " << py << endl;

    return 0;
}