
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
 Write a program that uses a do while loop to repetitively request two strings
 from the user and report which string is less than the other.
 */
#include <iostream>

int main() {

    string rsp;
    do {
        string str1, str2;
        cout << "输入两个字符换:";
        cin >> str1 >> str2;

        cout << "较大的为"<<(str1 >str2 ? str1 : str2) << endl;
        cout << "是否继续(y/n):";
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] == 'y');

    return 0;
}
