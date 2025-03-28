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
#include <iomanip>
#include <map>
#include <memory>
#include <numeric>
#include <random>
#include <regex>
#include <set>
using namespace std;
/**
读取文件, 在最后一行写上每行的字符数量
abcd
efg
hi
j
5 9 12 14

 */

int main() {
    fstream inOut("../data/letter2.txt",
                  fstream::ate | fstream::in | fstream::out);
    if (!inOut) {
        cout << "open file error" << endl;
        return -1;
    }

    /**
     * 记住末尾的位置pEnd, 等会要跳转来写数
     * 跳转到开头, 读取一行, 记住位置为pos2
     * 跳转到末尾输出 读取的字符数量
     * 跳转到pos2,
     *
     * inOut.tellg() != pEnd 这句不会, 最后一行不要读
     * 为什么inOut.tellg最后一定会等于pEnd?
     * 跟最后一个换行有关系不?
     * 如果最后一行没有换行, pos2 == -1 ,下一次读取getline失败
     * 也就是没有换行getline无法读取?
     * 
     * 为什么这个21它没有写?
     */
    string line;
    auto pEnd = inOut.tellg(); // 最后一个行
    inOut.seekg(0, fstream::beg);
    size_t cnt = 0;
    while (inOut && inOut.tellg() != pEnd && getline(inOut, line)) {
        cnt += line.size() + 1;
        auto pos2 = inOut.tellg();

        // 跳转结尾写入数据
        inOut.seekp(0, fstream::end);
        inOut << cnt << " ";
        inOut.flush();

        // 调回pos2
        inOut.seekg(pos2);
    }

    return 0;
}