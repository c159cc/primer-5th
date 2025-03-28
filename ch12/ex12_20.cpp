#include "ex12_19.h"
using namespace std;

/**
> Write a program that reads an input file a line at a time into a StrBlob and
uses a StrBlobPtr to print each element in that StrBlob.
 */

int main() {
    ifstream in("../data/book.txt");
    if (!in) {
        cerr << "Failed to open input file." << endl;
        return 1;
    }
    StrBlob sb;
    for (string line; getline(in, line);) {
        sb.push_back(line);
    }

    for (StrBlobPtr p = sb.begin(); p != sb.end(); p.incr()) {
        cout << p.deref() << endl;
    }
    return 0;
}