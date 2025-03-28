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
#include <bitset>
#include <cctype>
#include <functional>
#include <iomanip>
#include <map>
#include <memory>
#include <numeric>
#include <random>
#include <regex>
#include <set>
using namespace std;
/**
2个基类中存在相同的成员
1. 形参列表不同
2, private和public
3, Bear中有ZooAnimal没有
 */

class ZooAnimal {
};
class Bear : public ZooAnimal {
    void foo(int i) { cout << "Bear foo(int i)" << i << endl; }

  public:
    void boo() { cout << "Bear boo()" << endl; }
};
class Endangered {
  public:
    void foo(int i) { cout << "Bear foo(int i)" << i << endl; }
};
class Panda : public Bear, public Endangered {};

int main() {
    Panda p;
    // p.foo(1); // case2
    p.boo();
    return 0;
}