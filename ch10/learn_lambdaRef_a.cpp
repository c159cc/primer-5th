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
#include <functional>
#include <numeric>
using namespace std;
using namespace std::placeholders;

/**

平时我想传递一个引用只能在形参上表示, 实参只是一个对象而已,

但是我无法修改bind的形参?

如果只能在实参上动手脚呢?


 */
// 自定义的 reference_wrapper2 类模板

ostream &print(ostream &os, const string &s) { return os << s << " "; }
#include <iostream>

// 自定义的 reference_wrapper2 类模板
template <typename T> class reference_wrapper2 {
  private:
    T *ptr;

  public:
    // 构造函数，接收对象的引用
    explicit reference_wrapper2(T &ref) : ptr(&ref) {}

    // 转换为 T& 类型，方便像引用一样使用
    operator T &() const { return *ptr; }

    // 获取存储的引用
    T &get() const { return *ptr; }
};

// 自定义的 ref 函数
template <typename T> reference_wrapper2<T> ref2(T &obj) {
    return reference_wrapper2<T>(obj);
};

// 测试函数，接收 reference_wrapper2 类型的参数
void testFunction(reference_wrapper2<int> refObj) {
    // 修改引用对象的值
    refObj.get() = 20;
};

int main() {
    int num = 10;
    std::cout << "Before testFunction: num = " << num << std::endl;

    // 调用自定义的 ref 函数
    auto refObj = ref2(num);
    testFunction(refObj);

    std::cout << "After testFunction: num = " << num << std::endl;

    return 0;
}