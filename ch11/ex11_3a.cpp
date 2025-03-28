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
#include <map>
using namespace std;

/**
> Write your own version of the word-counting program.

1, 对于定义, 条件和递增, 可以用for
 */

int main() {
    map<string, size_t> word_count;
    for (string word; cin>>word;++word_count[word])
        ; 

    for (const auto& [word, count] : word_count)
        cout << word << " occurs " << count << " times" << endl;

    return 0;
}