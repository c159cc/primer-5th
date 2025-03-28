#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
#include <stack>

#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;

/**
 * 引用和top-level const是如何丢失的?
 */ 

// 定义模板函数
template <typename F, typename T1, typename T2> void f(F f, T1& t1, T2 t2) { 
    f(t1, t2);
}

// 定义一个可调用对象，用于作为 f 函数的第一个参数
void add(int &a, int b) {
    a += b;
    std::cout << "After addition, a = " << a << std::endl;
}

int main() {
    int num = 10;
    int value = 5;

    // 实例化模板函数，将 T1 指定为 int&
    f(add, num, value);

    std::cout << "Value of num after function call: " << num << std::endl;

    return 0;
}