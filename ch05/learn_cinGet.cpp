
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/* 学习do while 使用
 */
#include <iostream>

int main() {

    char str[100]={};
    while(cin.get(str, 3, 'c')){
        cout<<"read:"<<str<<endl;
    }
    cout<<"end"<<endl;
    

    return 0;
}
