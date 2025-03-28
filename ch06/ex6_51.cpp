
#include "Chapter6.h"
#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/**
 * > Explain what this loop does and whether it is a good use of assert:
 */
#define NDEBUG

void f(){
    cout<<"f"<<endl;
}
void f(int){
    cout<<"f(int)"<<endl;
}
void f(int, int){
    cout<<"f(int, int)"<<endl;
}
void f(double, double = 3.14){
    cout<<"f(double, double = 3.14)"<<endl;
}

int main() {
    // f(2.56, 42);      // 模糊
    f(42);            // 2
    f(42, 0);         // 3
    f(2.56, 3.14);    // 4

    return 0;
}