
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace std;
/*
 */
#include <iostream>

int iarr[10] = {1, 2, 3, 4, 5, 6};
int (*func(int i))[10] {
    iarr[i] = 100;
    return &iarr;
}

auto func2(int i)->int(*)[10] {
    iarr[i] = 100;
    return &iarr;
}

int main() {
    int(*p)[10] = func2(2);
    for (auto i : *p) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
