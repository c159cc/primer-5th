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
is.gcount()
 */

int main() {
    cout << "enter a string: "; 
    char arr[100];
    cin.getline(arr, 6, 't');
    // 输入abct, 输出abc
    cout << arr << endl;
    string ss;
    cin >> ss; // 这里输入helloworld
    char c;
    // cin.get(c);// 1
    auto cnt = cin.gcount(); 

    cout << "read " << cnt << " characters" << endl; // 4

    return 0;
}