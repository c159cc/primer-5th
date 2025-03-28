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
    string s2 = s1.substr(11, 6);
   
    cout << "s2=" << s2 << endl;
    return 0;
}
