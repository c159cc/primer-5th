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

#include "../include/Sales_item.h"
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
using namespace std;

/**
> Write a program that takes the names of an input file and two output files.
The input file should hold integers. Using an istream_iterator read the input
file. Using ostream_iterators, write the odd numbers into the first output file.
Each value should be followed by a space. Write hte even numbers into the second
file. Each of these values should be placed on a separate line.

1. 基础类需要有相同的isbn号码
 */

void printVec(const list<int> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    vector<Sales_item> items;
    ifstream in("../data/book.txt");
    if (!in) {
        cerr << "Error: cannot open file items.txt" << endl;
        return -1;
    }
    istream_iterator<Sales_item> in_iter(in), eof;
    copy(in_iter, eof, back_inserter(items));
    in.close();

    sort(items.begin(), items.end(), compareIsbn);

    for (auto beg = items.cbegin(), iter = beg; beg != items.cend();
         beg = iter) {
        iter = find_if(beg, items.cend(), [beg](const Sales_item &item) {
            return item.isbn() != beg->isbn();
        });
        // 不管是否找到都要打印beg, 到iter的元素
        cout << accumulate(beg, iter, Sales_item(beg->isbn())) << endl;
    }

    return 0;
}