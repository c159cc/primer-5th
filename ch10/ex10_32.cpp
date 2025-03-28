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

    for (auto beg = items.cbegin(); beg != items.cend();) {
        auto iter = find_if(beg, items.cend(), [beg](const Sales_item &item) {
            return item.isbn() != beg->isbn();
        });
        // 不管是否找到都要打印beg, 到iter的元素
        cout << accumulate(beg, iter, Sales_item()) << endl;
        beg = iter;
    }

    return 0;
}