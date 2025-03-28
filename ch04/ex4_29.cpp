
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
> Predict the output of the following code and explain your reasoning. Now run
the program . Is the output what you expected? If not, figure out why.
 */
int main() {
    // int x[10];
    // int *p = x;
    // int i = 1, *q = &i;
    // cout << "sizeof(p): " << sizeof(p) << endl;
    // cout << "sizeof(q): " << sizeof(q) << endl;

    int x[10];
    int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl; // 10
    cout << sizeof(p) / sizeof(*p) << endl; //  8/2=4
    return 0;
}
