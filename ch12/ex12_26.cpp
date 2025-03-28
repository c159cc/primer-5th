#include "ex12_22.h"
using namespace std;

/**
> Rewrite the program on page 481 using an allocator.
```c++
string *const p = new string[n]; // 构造了n个空strings
string s;
string *q =p;
while(cin>>s&&q!=p+n)
    *q++ = s;
const size_t size = q-p; // 记住我们读了多少个字符
delete [] p;
```
 */

void input_reverse_output(int n) {
    allocator<string> alloc;             // 定义了一个string的allocator
    string *const p = alloc.allocate(n); // 分配了n个空string
    string s;
    string *q = p;
    while (cin >> s && q != p + n) {

        alloc.construct(q++, s); // 构造了n个string并存入p数组中
    }

    for (; q != p;) {
        cout << *--q << " "; // 逆序输出字符串
        alloc.destroy(q);
    }
    cout << endl;           // 输出换行符
    alloc.deallocate(p, n); // 释放了n个string
}

int main() {
    input_reverse_output(3);

    return 0;
}