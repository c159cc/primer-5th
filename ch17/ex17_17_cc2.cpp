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
> Update your program so that it finds all the words in an input sequence that
violate the "ei" grammar rule.


.
 */

int main() {

    string word = "";
    string pattern = "[^c]ei";
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    string test_str = "receipt freind theif receive";
    regex re(pattern);

    // sregex_iterator it(test_str.begin(), test_str.end(), re),
    //     end_it;
    // 终于证明了这种格式是不对的regex
    for (sregex_iterator
             beg(test_str.begin(), test_str.end(), regex(pattern)),
         ed;
         beg != ed; ++beg) {
        cout << beg->str() << endl;
    }
 }