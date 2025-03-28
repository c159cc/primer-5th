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

#include "./ex15_34_TextQuery.h"
/**
> Sneaky的成员函数, 接收Sneaky参数a, 能访问a的protected成员吗?


 */
class Base {
  public:
    Base(int p) : prot_mem(p) {}

  protected:
    int prot_mem;
};
class Sneaky : public Base {
  public:
    Sneaky(int p) : Base(p) {}

  private:
    int priv_mem = 100;

  public:
    void print(Sneaky &a) {
        cout << prot_mem << endl; // 自己的父亲子对象的保护成员
        cout << priv_mem << endl; // 自己的私有
        cout << a.prot_mem << endl; // 兄弟的父亲子对象的保护成员
        cout << a.priv_mem << endl; // 兄弟的私有
    }
    void printb(Base &b) { cout << b.prot_mem << endl; }
};
int main() {
    Sneaky s(10), s2(20);
    s.print(s2); // 20

    Base b(30);
    s.printb(b); // ????
    return 0;
}