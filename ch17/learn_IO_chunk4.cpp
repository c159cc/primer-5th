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
is.ignore(size, delim)

也就是说如果size 个字符没有包含delim, 那么忽略size个字符

如果size 个字符包含了delim, 忽略直到delim
 */

int main() {

    cout << "enter a string:" << endl;

    cin.ignore(3, 't');

    char arrc[100]={0};
    cin.read(arrc, 100);
    cout << arrc << endl;
    return 0;
}