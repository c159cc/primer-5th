#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
> Write a function that takes and returns an istream&. The function should read
the stream until it hits end-of-file. The function should print what is reads to
the standard output. Reset the stream so that it is valid before returning the
stream.

 */

istream &readAndPrint(istream &is) {
    string line;
    while (is>>line) { 
        cout << line << endl;
    }
    is.clear(); 
    return is;
};

int main() {
    readAndPrint(cin);
    return 0;
}