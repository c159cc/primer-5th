#include "ex12_19.h"
using namespace std;

/**
> Compilers don't always give easy-to-understand error messages if we attempt to copy or assign a unique_ptr. Write a program that contains these errors to see how your compiler diagnoses them.
 */
 
int main() {
    unique_ptr<int> p1(new int(5));
    // unique_ptr<int> p2(p1); // 已删除的函数

    return 0;
}