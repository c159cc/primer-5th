#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include <forward_list>
#include <list>
using namespace std;

int main() {
    string s1 = "hello world";

    // 是从左到右的顺序
    auto res = s1.rfind('l');
    cout << "res=" << res << endl;


    // 找子数组
    const char *str = "llo";
    char arr[] = {'l', 'l', 'o', 0};

    auto res2 = s1.find(arr);
    cout << "res2=" << res2 << endl; // 2

    auto res3 = s1.find(str);
    cout << "res3=" << res3 << endl; // 2

    
    return 0;
}
