#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/**
> Use the function you wrote for the first exercise in 8.1.2 to print the
contents of an istringstream object.



 */
istream &readAndPrint(istream &is) {
    string line;
    while (is >> line) {
        cout << line << endl;
    }
    is.clear();
    return is;
};

int main() {
    istringstream iss("Hello world\nThis is a test\n");
    readAndPrint(iss);
    return 0;
}