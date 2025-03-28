#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

#include <list>
using namespace std;

/**
char* 怎么转换为string
 */

int main() {
    // 不使用new可以吗
    char *charStr1 = "Hello";
    char *charStr2 = charStr1;
    string str1(charStr1);
    string str2(charStr2);
    cout << "str1=>" << str1 << endl;
    cout << "str2=>" << str2 << endl;

    // 我不理解的是指向字符的指针怎么知道有多少个字符
    char arr[3] = {'a', 'b', 'c'};
    char *charStr3 = arr;
    string str3(arr);
    string str4(charStr3);
    cout << "str3=>" << str3 << endl;
    cout << "str4=>" << str4 << endl;

    // 所以数组的名字不单单是指向字符的指针


    return 0;
}
