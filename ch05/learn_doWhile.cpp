
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/* 学习do while 使用
 */
#include <iostream>

int main() {

    string rsp;
    do {
        int num1, num2;
        cout << "输入两个数字:";
        cin >> num1 >> num2;

        cout << "两数之和为:" << num1 + num2 << endl;
        cout << "是否继续(y/n):";
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] == 'y');

    return 0;
}
