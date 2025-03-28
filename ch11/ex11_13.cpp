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

#include "../ch07/learn_SalesData.h"
#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <numeric>
#include <set>
using namespace std;

/**
> There are at least three ways to create the pairs in the program for the
previous exercise. Write three versions of that program, creating the pairs in
each way. Explain which form you think is easiest to write and understand, and
why.


 */

int main() {
    vector<pair<string, int>> vec;



    string line;
    int num;
    while(cin >> line >> num){
        // vec.push_back(make_pair(line, num));
        // vec.push_back(pair<string, int>(line, num));
        vec.emplace_back(line, num);
        vec.push_back({line, num});
    }

    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}