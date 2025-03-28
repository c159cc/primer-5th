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
    string s = "caaabbbccc";
    regex r = regex("a+(b+)(c+)");
    smatch m;
    if (regex_search(s, m, r)) {
        cout << "match: " << m.str() << endl;
        cout << "size=" << m.size() << endl;

        cout << "str(1)=" << m.str(1) << endl;
        cout << "length(1)=" << m.length(1) << endl;
        cout << "position(1)=" << m.position(1) << endl;

        ssub_match sub = m[1];
        cout << "submatch: " << sub.str() << endl;

    } else {
        cout << "no match" << endl;
    }

    return 0;
}