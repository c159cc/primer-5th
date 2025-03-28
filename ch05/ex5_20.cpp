
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

    string preStr, str;
    bool flag = false;
    while(cin>>str){
        if(str==preStr){
            cout << "找到相同的string" << endl;
            flag = true;
            break;
        }
        preStr = str;
    }

    if(!flag){
        cout << "没有找到相同的string" << endl;
    }

    return 0;
}
