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
 * minmax(val1, val2); // val
 */

int main() { 

    pair<int, int> p1 = minmax(2, 1);
    cout << "minmax(2, 1) = " << p1.first<<" "<< p1.second << endl; 

    pair<int, int> p2 = minmax({5, 6, 2});
    cout << "minmax({5, 6, 2}) = " << p2.first<<" "<< p2.second << endl;  
    return 0;
}