
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

  
 // 都是左值得到左值? 那就是可以赋值了

int main() {

    int a = 10, b = 20;
    int c = (a < b ? b : a) = 200; // 左值可以赋值
    // int c = (a < b ? b : a+1) = 200; // 提供一个右值会报错

    std::cout << "b= " << b<<" c=" <<c<< std::endl;

    
    return 0;
}
