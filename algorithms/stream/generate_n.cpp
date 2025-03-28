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
    generate_n(dest, cnt, Gen);
 */
 int myGen(){
    static int i = 0;
    return i++;
} 

int main() { 
    vector<int> v1;

    generate_n(back_inserter(v1), 10, myGen);
    for (auto i : v1) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}