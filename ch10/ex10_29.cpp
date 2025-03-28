#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
#include <stack>

#include <algorithm>
#include <numeric>
#include <iterator>
using namespace std;

/**


> Write a program using stream iterators to read a text file into a vector of
strings.

 */

void printVec(const list<int> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    ifstream ifs("../data/book.txt");
    if (!ifs)
        cout << "Error: unable to open file" << endl;

    vector<string> words;
    istream_iterator<string> in_iter(ifs), eof;
    copy(in_iter, eof, back_inserter(words)); 

    cout << "Words in the file: ------------------------------ " << endl;
    copy(words.begin(), words.end(), ostream_iterator<string>(cout, " "));
    cout << endl;

    return 0;
}