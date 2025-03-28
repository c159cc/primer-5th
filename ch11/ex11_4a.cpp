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
    string word = "hello,!";
    auto iter = remove_if(word.begin(), word.end(), static_cast<int(*)(int)>(ispunct));
    word.erase(iter, word.end());
    cout << "word: "<< word << endl;

    return 0;
}