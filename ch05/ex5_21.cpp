
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

    string read, temp;
    while (cin >> read) {
        if (read == temp && temp[0]==toupper(temp[0])) {
            break;
        }
        temp = read;
    }

    if (cin.eof()) {
        cout << "没有找到相同的string" << endl;
    } else
        cout << "相同的string: " << temp << endl;

    return 0;
}
