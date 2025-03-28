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
    regex r = regex("a+([.-]?)([.-])?");
    smatch m;
    if (regex_search(s, m, r)) {
        cout << "match: " << m.str() << endl; // aaa
        cout << "size=" << m.size() << endl;// 3
 

        ssub_match sub1 = m[1];
        ssub_match sub2 = m[2];
        cout << "submatch1: " << sub1.matched << endl; // true
        cout << "submatch2: " << sub2.matched << endl; // false

    } else {
        cout << "no match" << endl;
    }

    return 0;
}