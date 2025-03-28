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
拷贝构造不能是explicit?

 */
class Foo {
  public:
    string s;
    Foo() = default; // 默认构造函数
    Foo(string t) : s(t) {};
    explicit Foo(const Foo &) = default; // 拷贝控制
};

int main() {
    Foo f1("hello");
    // Foo f2 = f1; // 无法调用拷贝构造
    Foo f2(f1); // 调用拷贝构造函数

    cout << f2.s << endl; // hello
    return 0;
}