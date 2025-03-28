
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int ival1 = 10, ival2 = 20;
    int a = 0, b = 1, c = 1, d = 1, f = 0;
    if (a && b < c && d) {
        cout << "相等" << endl;
    }
    cout << "1:" << (a && b < c && d) << endl;

    // 没有意义, 因为短路与必须前面正确才会计算后面
    cout << "短路优先级高:" << ((a && b) < (c && d)) << endl;
    cout << "优先级一样:" << (((a && b) < c) && d) << endl;
    cout << "小于优先级高:" << (a && (b < c) && d) << endl;
    // 如果&& 优先级高 (a&&b) < (c&&d)

    a = 0, b = 2, c = 2;
    // 比较< 和 == 优先级
    cout << "无优先级:" << (a < b == c) << endl;
    cout << " == 优先级一样:" << (a < (b == c)) << endl;
    cout << " < 优先级高:" << ((a < b) == c) << endl;
    // 要让第二个,第三个结果不一样, 需要什么值? 2=true, 3=false

    cout << "无优先级:" << (b == c > a) << endl;
    cout << " == 优先级一样:" << ((b == c) > a) << endl;
    cout << " > 优先级高:" << (b == (c > a)) << endl;
    return 0;
}
