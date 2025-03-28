
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Write and test your own version of reset that takes a reference.
 */
#include <iostream>

void reset(int& i){
    i = 0;
} 

int main() {

    int a = 20;
    cout << "a=" << a << endl;
    reset(a);

    cout << "a=" << a << endl;

    return 0;
}