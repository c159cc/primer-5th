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

#include "ex13_30_HasPtr.h"
#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;

int main() {
    vector<HasPtr> v;
    v.push_back(HasPtr("aaa"));
    v.push_back(HasPtr("bbb"));
    v.push_back(HasPtr("ddd"));
    v.push_back(HasPtr("ccc"));

    for (auto &hp : v)
        hp.show();
    cout << endl;

    sort(v.begin(), v.end());
    for (auto &hp : v)
        hp.show();
    cout << endl;
}
