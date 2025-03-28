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

ostream &print(ostream &os, const string &s) { return os << s << " "; }

template <typename T> class reference_wrapper2 {
  private:
    T *ptr;

  public:
    // 构造函数，接收对象的引用
    explicit reference_wrapper2(T &ref) : ptr(&ref) {}

    // 转换为 T& 类型，方便像引用一样使用
    operator T &() const { return *ptr; }

    // 获取存储的引用
    // T &get() const { return *ptr; }
};
// 自定义的 ref 函数
template <typename T> reference_wrapper2<T> ref2(T &obj) {
    return reference_wrapper2<T>(obj);
};
int main() {
    vector<string> svec = {"hello", "world"};
    for_each(svec.begin(), svec.end(), bind(print, ref2(cout), _1));
    cout << endl;
    return 0;
}