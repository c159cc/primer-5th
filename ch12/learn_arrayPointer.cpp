#include "ex12_2.h"
using namespace std;

/**
typedef int arrT[42];
int *p = new arrT;
int *q = p;
p和q有没有什么区别?
没有什么区别
 */

int main() {
    typedef int arrT[42];
    int *p = new arrT;
    int *q = p;
    int *t = new int[42];

    cout << " &p=" << &p << endl;
    cout << " &q=" << &q << endl;

    cout << " sizeof(p)=" << sizeof(p) << endl;
    cout << " sizeof(q)=" << sizeof(q) << endl;
    cout << " sizeof(t)=" << sizeof(t) << endl;


    return 0;
}