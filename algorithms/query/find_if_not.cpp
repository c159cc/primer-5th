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
 * find_if_not(beg, end, unaryPred)  找第一个不满足条件的值, 返回it
 */
 
int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = find_if_not(v.begin(), v.end(), [](auto val){return val<6;});
    // 6不满足小于6, 
    if (it != v.end()) {
        cout << "found " << *it << endl;
        cout<<"next is "<<*(it+1)<<endl;
    }
 


    return 0;
}