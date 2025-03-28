
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

  
 // 都是左值得到左值? 那就是可以赋值了

int main() {

    int grade = 1;
    cout << ((grade < 60) ? "fail" : "pass") << endl; // 打印pass或fail
    cout << (grade < 60) ? "fail" : "pass" ;   // 打印1或0
    cout << (cout << (grade < 60) ? "fail" : "pass");
    // cout << grade < 60 ? "fail" : "pass";     // Error
    return 0;
}
