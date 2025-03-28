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
is.getline(sink, size, delim); // 读取并抛弃delim
 */

int main() {
    cout << "enter a string: ";

    // 1, 先遇到size
    // char arr[100];
    // cin.getline(arr, 3, 't');
    // // 输入abcdt 输出abc
    // // 输出ab, 因为第三个字符为null
    // cout << arr << endl; // ab

    // 2, 先遇到delim
    // char arr[100];
    // cin.getline(arr, 6, 't');
    // // 输入abct, 输出abc
    // cout << arr << endl;

    // // 3, 先遇到end-of-file
    // char arr[100];
    // cin.getline(arr, 6, 't');
    // // 输入a ctrl+z, 输出a
    // cout << arr << endl; // a

    // // 4, 据说delim会被读取和抛弃
    char arr[100];
    cin.getline(arr, 6, 't');
    // 输入abct, 输出abc
    cout << arr << endl;
    char c;
    cin.get(c);
    cout << c << endl; // t
    return 0;
}