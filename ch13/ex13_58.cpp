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
 * > Write versions of class Foo with print statements in their sorted functions
 to test your answer to the previous two exercises.

 */

class Foo {
  public:
    Foo sorted() &&;      // 运行于可修改的右值上
    Foo sorted() const &; // 运行于任何Foo上
  public:
    vector<int> data;
};

// 对象是右值, 所以可以原地排序
Foo Foo::sorted() && {
    cout << "move version" << endl;
    sort(data.begin(), data.end());
    return *this;
}

// 对象是左值或者const 都不能原地排序
// Foo Foo::sorted() const & {
//     Foo ret(*this);
//     sort(ret.data.begin(), ret.data.end());
//     return ret;
// }

// Foo Foo::sorted() const & {
//     cout << "sorted() const &" << endl;
//     Foo ret = Foo(*this);
//     return ret.sorted();
// }

Foo Foo::sorted() const & {
    cout << "sorted() const &" << endl;
    return Foo(*this).sorted();
}

int main() {
    Foo f;
    f.data = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    f.sorted();
}

