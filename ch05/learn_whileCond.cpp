
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/* 学习do while 使用
 */
#include <iostream>

int main() {

    string buf;
    // cin>>buf; 会崩溃
    // 都无法读取中文
    while (getline(cin, buf) && !buf.empty()) {
        cout << "读取到" << buf << endl;
        cout << "jixu" << endl;
    }

    return 0;
}
