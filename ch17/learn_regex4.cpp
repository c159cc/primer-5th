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
理解m.length(n)
m.position(n)
m.str(n)
m[n]
 */

int main() {
    vector<char> v;
    string s = "caaabbbccc";
    regex r = regex("a+(b+)(d+)");
    smatch m;
    if (regex_search(s, m, r)) {
        // 格式化标志，这里使用默认标志
        std::regex_constants::match_flag_type mft =
            std::regex_constants::format_default;

        string fmt = "$1.$2";
        m.format(back_inserter(v), fmt);

    } else {
        cout << "no match" << endl;
    }

    cout << v.data() << endl;
    return 0;
}