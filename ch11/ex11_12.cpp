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
> Write a program to read a sequence of strings and ints storing each into a
pair. Store the pairs in a vector.

 */

int main() {
    vector<pair<string, int>> vec;



    string line;
    int num;
    while(cin >> line >> num){
        vec.push_back(make_pair(line, num));
    }

    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}