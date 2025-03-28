#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
> What if we defined the vector in the previous execercise to hold objects of
type C?
 */

struct NoDefault {
    NoDefault(int i) : num(i) {}
    int num;
};

struct C {
    C() {
        cout << "Constructor of C" << endl;
    };
    NoDefault nd = 100;
};

int main() {
    cout << "Hello, world!" << endl;
    C c;
    cout << c.nd.num << endl;

    vector<C> vec(10);
    return 0;
}