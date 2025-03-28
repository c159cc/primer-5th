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
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;
/**
> Define a tuple that holds three int values and initialize the members to 10,
20, and 30.
 */

int main() { 
    tuple<int, int, int> t(10, 20, 30);
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

    using SomeTuple = tuple<string, vector<string>, pair<string, int>>;
    

    return 0; }