
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool f1() {
    cout << "f1()" << endl;
    return true;
}
bool f2() {
    cout << "f2()" << endl;
    return false;
}
bool f3() {
    cout << "f3()" << endl;
    return false;
}
bool f4() {
    cout << "f4()" << endl;
    return false;
}
bool f5() {
    cout << "f5()" << endl;
    return false;
}

struct MyInt{
    int value;
    MyInt(int v) : value(v) {}
};

bool operator>(const MyInt &a, const MyInt &b) {
    cout << "a="<<a.value<<" b="<<b.value<< endl;
    return a.value > b.value;
}

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    int result = a > b ? a : b > c ? b : c > d ? c : d;

    std::cout << "The result is: " << result << std::endl;

    int result2 =
        a < b
            ? (std::cout << "Evaluating a > b and returning a" << std::endl, a)
        : b > c
            ? (std::cout << "Evaluating b > c and returning b" << std::endl, b)
        : c > d
            ? (std::cout << "Evaluating c > d and returning c" << std::endl, c)
            : (std::cout << "Evaluating c > d and returning d" << std::endl, d);

    std::cout << "The result is: " << result2 << std::endl;

    
    return 0;
}
