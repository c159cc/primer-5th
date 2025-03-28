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

#include "../include/Sales_item.h"
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
using namespace std;

/**
#### Random-access iterators
常量时间内提供任何位置的访问

- `<,<=,>,>=` 比较迭代器位置
-  `+,+=,-,-=` 一个整数
- `-` 两个迭代器距离
- `[]` 下标访问

 cc: bidirectional iterator不支持关系? 整型加减? 迭代器减法?

是的, 一次只能移动一个位置, 所以不能加减一个整数, 不能计算距离, 不能进行关系运算

不能跳跃整数个位置, 不能计算迭代器距离, 不能比较迭代器大小
 */

int main() {

    list<int> lst = {1, 2, 3, 4, 5};

    auto it = lst.begin(), end = lst.end();
    auto it2 = it + 2;
    cout << *it2 << endl; // 3

    cout << (it < end) << endl;
    cout << (end - it) << endl;

    return 0;
}