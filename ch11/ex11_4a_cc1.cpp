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
#include <cctype>
#include <map>
#include <numeric>
#include <functional>
using namespace std;

/**
> Extend your program to ignore case and punctuation. For example, "example."
"example," and  "Example" should all increment the same counter.

Hello
hello
hello,
Hello....
z
 */

int main() {
    map<string, size_t> word_count;
    for (string word; cin >> word;) { 
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        word_count[word]++;
    }

    for (const auto &[word, count] : word_count)
        cout << word << " occurs " << count << " times" << endl;

    return 0;
}