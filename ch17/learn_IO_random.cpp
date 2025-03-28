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
#include <iomanip>
#include <map>
#include <memory>
#include <numeric>
#include <random>
#include <regex>
#include <set>
using namespace std;
/**
tellp();
seekp(pos);
seekp(off, from);
 */

int main() {

    istringstream iss("hello world");
    string s, s2;
    auto pos = iss.tellg();  
    cout<<"pos="<<pos<<endl;
    iss >> s;
    cout << "s=" << s << endl;
    auto pos2 = iss.tellg();
    cout << "pos2=" << pos2 << endl;

    iss.seekg(pos);
    iss >> s2;
    cout << "s2=" << s2 << endl;
    return 0;
}