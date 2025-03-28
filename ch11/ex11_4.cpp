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
#include <map>
#include <numeric>
using namespace std;

/**
> Extend your program to ignore case and punctuation. For example, "example."
"example," and  "Example" should all increment the same counter.
 */

int main() {
    map<string, size_t> word_count;
    for (string word; cin >> word;) {
        // 这里去掉标点并转还为小写

        string newWord = "";
        remove_copy_if(word.begin(), word.end(), back_inserter(newWord),
                       [](char c) { return ispunct(c); }); 

        transform(newWord.begin(), newWord.end(), newWord.begin(), ::tolower);
        word_count[newWord]++;
    }

    for (const auto &[word, count] : word_count)
        cout << word << " occurs " << count << " times" << endl;

    return 0;
}