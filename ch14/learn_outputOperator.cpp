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
 为什么输出操作符必须是非成员函数?

 一旦定义为成员函数, 左手操作数必须为this
 输出操作符要求左手操作数为ostream

 那我是否可以继承ostream呢?
 */
class Foo {
  public:
    ostream &operator<<(int);
};
ostream &Foo::operator<<(int) {
    cout << "Foo::operator<<" << endl;
    return cout;
}
int main() {
    Foo foo;
    foo << 1 << 2; // 输出 Foo::operator<<

    return 0;
}