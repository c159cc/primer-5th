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
#include <regex>
#include <set>
#include<regex>
#include <string> 

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::regex;
using std::sregex_iterator;
/**
> Update your program so that it finds all the words in an input sequence that
violate the "ei" grammar rule.


.
 */

int main() {

    string word=""; 
    string pattern = "[^c]ei";
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*"; 
    string test_str = "receipt freind theif receive";
    regex re(pattern);
   
    // sregex_iterator it(test_str.begin(), test_str.end(), re),
    //     end_it;
    for (sregex_iterator beg(test_str.begin(), test_str.end(), re), ed;
         beg != ed; ++beg) {
        cout << beg->str() << endl;
    }
 }