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
is.get() 读取int?
 */

int main() {
    int i = cin.get();
    cin.unget();
    int j = cin.get();
    cout << "i=" << i << " j=" << j << endl;

     cin.putback(2);
    cout << " ret="<<cin.get()<< endl;

    return 0;
}