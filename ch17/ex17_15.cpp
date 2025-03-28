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
#include <bitset>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
#include<regex>
using namespace std;
/**
> Write a program using the pattern that finds words that violate the "i before
e except after c" rule. Have your program prompt the user to supply a word and
indicate whether the word is okay or not. Test your program with words that do
and do not violate the rule.

.
 */

 
 int main() {

    string word;
    cout << "Enter a word: ";
    string pattern = "[^c]ei";
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    smatch results;
    while (cin >> word) {
        if (regex_search(word, results, regex(pattern))) {
            cout << "The word " << word << " violates the rule." << endl;
        } else {
            cout << "The word " << word << " is okay." << endl;
        }
        cout << "Enter a word:";
        
    }
 }