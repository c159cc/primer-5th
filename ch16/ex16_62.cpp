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
#include <unordered_set>

#include "ex16_62_Salesdata.h"
using namespace std;
/**
> Define your own version of hash<Sales_data> and define an unordered_multiset
of Sales_data objects. Put several transactions into the container and print its
contents.

为什么要在Sales_data中定义hash?
为了让用户使用?
用户不需要使用把?
unordered_multiset里面需要使用

1, 需要和hash的模板定义在同一个命名空间, 所以需要打开std

需求: 要能断点进入hash方法

 */

int main() {
    unordered_multiset<Sales_data> items;
    items.insert({"0-201-78345-X", 10, 29.99});
    items.insert({"978-059035342X", 10, 19.99});
    items.insert({"978-0134685991", 5, 15.99});

    for (const auto &item : items) {
       print(cout, item) << endl;
    }
    return 0;
}