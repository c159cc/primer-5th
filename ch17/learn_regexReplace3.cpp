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
我想用replace解决什么问题?

所有的cc替换为aa


 */

int main() { 
    string s = "aaccbbbccc";
    regex r = regex("cc"); 
    auto ss = regex_replace(s, r, "aa");

    cout << ss << endl;
    return 0;
}