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
#include <numeric>
using namespace std;

/**

如果lambda的body不只一个return 语句, 没有指定一个返回类型, 返回void

也就是没有指定返回类型的情况下, 除非只有一个语句, 这时编译器会推断返回类型,
否则返回void

cc: 有多个语句, 没有返回类型, 可以return吗? 编译器会推断吗



 */

int main() {

    auto f = []() {
        string s = "helo";

        return s;
    };

    auto r = f();
    cout << r << endl;

    return 0;
}