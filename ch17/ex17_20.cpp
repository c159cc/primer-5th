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
using namespace std;
/**
> Write your own version of the program to validate phone numbers.


.
 */

int main() {

    string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ]?)(\\d{4})";
    regex pattern = regex(phone);

    string input = "hello123-456-7890world123-456-7890nihao";
    smatch results;
    if (regex_search(input, results, pattern)) {
        cout << "Phone number found: " << results.str() << endl;
    }

    for (sregex_iterator it =
             sregex_iterator(input.begin(), input.end(), pattern);
         it != sregex_iterator(); ++it) {
        cout << it->str() << endl;
    }
}