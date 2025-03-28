
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace std;
/*
假设二维数组, `a[3][4]`  那么a的地址, 是不是等于a[0] 的地址?
 */
#include <iostream>

int main( ) {
    int a[3][4] = {0};
    cout << a << endl;               //: 0x61fde0
    cout << "a[0]:" << a[0] << endl; //: 0x61fde0

    int ia[10] = {0};
    int(*matrix)[10] = &ia; // 这样可以吗? (a)
    // int(*matrix)[10] = ia;  // 这样呢? (b)

    return 0;
}
