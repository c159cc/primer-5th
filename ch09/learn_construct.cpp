#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include <forward_list>
#include <list>
using namespace std;

int main() {
    string s1 = "hello world";
    string s2(s1, 2, 3); 

    char cstr[] = "hello world";
    string s3(cstr, 2, 3); 
    cout << "s2=" << s2 << endl;
    cout << "s3=" << s3 << endl;

    string s4(s1, 2);
    string s5(cstr, 2);
    cout << "s4=" << s4 << endl; // llo world
    cout << "s5=" << s5 << endl; // he


    // 如果是cstr+1开始呢? pos2算是偏移?
    string s6(cstr + 1, 2, 3);
    cout << "s6=" << s6 << endl; 
    return 0;
}
