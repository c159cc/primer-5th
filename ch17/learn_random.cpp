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
#include <map>
#include <memory>
#include <numeric>
#include <random>
#include <regex>
#include <set>
using namespace std;
/**
.
 */

int main() {

    //     default_random_engine e;
    //     for (int i = 0; i < 10; i++)
    //         cout << "i=" << e() << " ";
    //     cout << endl;

    //     // e和e2输出的值竟然是一样的
    //     default_random_engine e2;
    //     for (int i = 0; i < 10; i++)
    //         cout << "i=" << e2() << " ";
    //     cout << endl;

    // 下面两个的结果还是一样的
    uniform_int_distribution<unsigned> u(0, 9);
    default_random_engine e; // 用来生成无符号随机整数
    for (size_t i = 0; i < 10; ++i)
        // u使用e作为source
        // 每个调用返回范围内均匀分布的随机值
        cout << u(e) << " ";
    cout << endl;

    uniform_int_distribution<unsigned> u2(0, 9);
    default_random_engine e2; // 用来生成无符号随机整数
    for (size_t i = 0; i < 10; ++i)
        // u使用e作为source
        // 每个调用返回范围内均匀分布的随机值
        cout << u2(e2) << " ";
    cout << endl;
    return 0;
}