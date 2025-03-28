
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
>  Write and test your version of fact.
 */
#include <iostream>

void myswap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
} 

int main() {

    int a = 1, b = 20;
    cout << "before swap a = " << a << " b = " << b << endl;
    myswap(&a, &b);
    cout << "after swap a = " << a << " b = " << b << endl;

    return 0;
}