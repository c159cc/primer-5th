#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/**
> Write a function that takes and returns an istream&. The function should read
the stream until it hits end-of-file. The function should print what is reads to
the standard output. Reset the stream so that it is valid before returning the
stream.

 */

void read2Vector(const char *path, vector<string> &vec) {

    ifstream file(path);
    if (file) { // 检查是否打开成功
        string word;
        while (file >> word) {
            vec.push_back(word);
        }
    }
}

int main() {
    vector<string> vec;
    read2Vector("../data/book.txt", vec);
    for (auto &line : vec) {
        istringstream iss(line);
        string word;
        while (iss >> word) { 
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}