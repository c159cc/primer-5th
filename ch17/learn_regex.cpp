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
#include <regex>
using namespace std;
/**
> Define a data structure that contains an integral object to track responses to
a true/false quiz containing 10 questions. what changes, if any, would you need
to make in your data structure if the quiz had 100 questions?

.
 */

int main() {

    string pattern("[^c]ei"); // 找ei, 但前面不能是c
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    regex r(pattern);
    smatch results;
    string test_str = "receipt freind theif receive";
    if (regex_search(test_str, results, r))
        cout << results.str() << endl;
    return 0; }