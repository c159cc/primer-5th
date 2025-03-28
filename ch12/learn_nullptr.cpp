#include "ex12_2.h"
using namespace std;

/**
= nullptr会销毁对象, 释放内存吗

 */

int main() {
    string *s1 = new string("hello");
    string *s2 = new string("world");
    shared_ptr<string> p(s1);
    unique_ptr<string> q(s2);

    // p = nullptr;
    // q = nullptr;

    cout << *s1 << endl; // 输出hello
    cout << *s2 << endl; // 输出world

    return 0;
}