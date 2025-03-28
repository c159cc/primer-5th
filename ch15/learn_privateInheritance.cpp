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
private继承保护了基类成员不被外部访问, 有没有保护基类对象不被外部访问呢?
 */

 
class Base {
public:
    void print() {
        std::cout << "Base object" << std::endl;
    }
};

class Derived : private Base {
  public:
    void derivedPrint() {
        print();
    }
};

int main() {
    Derived d;
    Base* b = &d; // 错误，不能进行隐式向上转换
    d.derivedPrint(); 
    return 0;
}