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
> Rewrite the bookstore program from 1.6 using a vector to hold the transactions
and various algorithms to do the processing. Use sort with your compareIsbn
function from 10.3.1 to arrange the transactions in order, and then use find and
accumulate to do the sum.

1. 基础类需要有相同的isbn号码
 */

void printVec(const list<int> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    vector<int> items;
    ifstream in("../data/input.txt");
    if (!in) {
        cerr << "Error: cannot open file items.txt" << endl;
        return -1;
    }
    istream_iterator<int> in_iter(in), eof;
    ofstream out("../data/odd.txt"), out2("../data/even.txt") ;
    ostream_iterator<int> out_iter(out, " "), out2_iter(out2, "\n");

    // for (; in_iter != eof;) {
    //     cout << *in_iter << " " << boolalpha << (*in_iter & 1) << endl;
    //     ((*in_iter & 0x01) ? out_iter : out2_iter) = *in_iter++;
    //     // 问题在哪儿呢
    //     // 问题是什么呢?
    // }

    for_each(in_iter, eof, [&out_iter, &out2_iter](const int i) {
        (i&0x01? out_iter : out2_iter) = i;
    });

    // while (in_iter != eof) {
    //     if ((*in_iter) & 1) {
    //         out_iter = *in_iter++;
    //     } else {
    //         out2_iter = *in_iter++;
    //     }
    // }

    return 0;
}