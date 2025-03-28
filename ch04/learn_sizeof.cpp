
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// sizeof string或者vector返回 the fixed type of these types

int main() {

    string str = "hello";
    string str2 = "hell";
    vector<int> vec = {1, 2, 3};
    vector<int> vec2 = {1, 2};

    cout << "sizeof(string) = " << sizeof(str) << endl;
    cout << "sizeof(vector<int>) = " << sizeof(vec) << endl;
    cout << "sizeof(string) 2 = " << sizeof(str2) << endl;
    cout << "sizeof(vector<int>) 2= " << sizeof(vec2) << endl;

    return 0;
}
