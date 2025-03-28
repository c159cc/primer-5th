
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

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    assert(b!= 0); // check if b is not zero
    return a / b;
} 
int main() {
    int func(int, int);
 

    vector<decltype(func) *> v = {add, subtract, multiply, divide};
    for(auto f : v){
        cout << f(2, 2) << endl;
    }

    return 0;
}