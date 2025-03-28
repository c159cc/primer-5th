#include <cassert>
#include <cstring>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/**
> Write a function that takes and returns an istream&. The function should read
the stream until it hits end-of-file. The function should print what is reads to
the standard output. Reset the stream so that it is valid before returning the
stream.

 */

void read2Vector(const char* path, vector<string>& lines) {

    ifstream file(path);
    if (file) { // 检查是否打开成功
        string line;
        while (getline(file, line)) {
            lines.push_back(line);
        }
    }
} 

int main() {
    vector<string> lines;
    read2Vector("../data/book.txt", lines);
    for(auto& line : lines){
        cout<<line<<endl;
    }
    return 0;
}