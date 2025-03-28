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
#include <numeric>
#include <unordered_set>
using namespace std;

/**
负载因子是否包含了没有使用的桶
 */

int main() {
    unordered_set<int> mySet;
    // mySet.rehash(10);

    mySet.insert(1);

    cout << "elements count=" << mySet.size() << endl;
    cout << "bucket count=" << mySet.bucket_count() << endl;
    cout << "bucket max count=" << mySet.max_bucket_count() << endl;
    cout << "load factor=" << mySet.load_factor() << endl;

    cout<< "max load factor=" << mySet.max_load_factor() << endl;

    double my_factor = mySet.size() * 1.0 / mySet.bucket_count();
    cout << "my_factor=" << my_factor << endl;
    return 0;
}