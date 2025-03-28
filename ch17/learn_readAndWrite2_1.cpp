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
     * 文件末尾追加每一行的字符数量
     *
     * 思路:
     * 读取后的位置要记录方便跳回来, 
     * getline放在循环里, 保证读取成功
     * 读取完成后跳转末尾
     */
    auto pEnd = inOut.tellg(); // 这里是tellp还是tellg? 
    inOut.seekg(0, fstream::beg);
    string line;
    size_t count = 0;
    while (inOut && inOut.tellg() != pEnd && getline(inOut, line)) { 
        // 读取之后的位置必须要记录, 写完之后跳转回来
        auto readPos = inOut.tellg(); 
        count = line.length();

        inOut.seekp(0, fstream::end);
        inOut << count << " ";
        inOut.flush(); 

        inOut.seekg(readPos);
    }
    inOut.seekp(0, fstream::end);
    inOut << "\n"; 
    return 0;
}