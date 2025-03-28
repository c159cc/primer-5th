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
    string s2 = "pi=asf";
    auto d = stoi(s2.substr(s2.find_first_of("+-.0123456789")));

    cout << d << endl;

    return 0;
}
