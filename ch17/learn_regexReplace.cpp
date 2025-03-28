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
.
 */

int main() {

    string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ]?)(\\d{4})";
    regex pattern = regex(phone);

    string input = "hello123-456-7890world123-456-7890nihao";
    smatch results;
    string output = "$2.$5";
    // Phone number found: hello123.456world123.456nihao
    cout << "Phone number found: " << regex_replace(input, pattern, output )
         << endl;

    // 如果使用了format_no_copy 就不输出hello了,
    // Phone number found: 123.456123.456
    cout << "Phone number found: "
         << regex_replace(input, pattern, output,
                          regex_constants::format_no_copy)
         << endl;
    return 0;
}