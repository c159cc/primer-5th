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
copy constructor或者copy assignment 会调用析构器吗?

 */
class MyClass {
  public:
    MyClass() { std::cout << "Constructor called" << std::endl; }

    MyClass(const MyClass &other) {
        std::cout << "Copy constructor called" << std::endl;
    }
    MyClass &operator=(const MyClass &other){
        std::cout << "Copy assignment operator called" << std::endl;
        return *this;
    }

    ~MyClass() { std::cout << "Destructor called" << std::endl; }
};

int main() {
    MyClass obj1;
    MyClass obj2(obj1); // 调用拷贝构造函数

    cout<<"assignment operator"<<endl;
    obj1 = obj2; // 调用拷贝赋值运算符
    return 0;
}