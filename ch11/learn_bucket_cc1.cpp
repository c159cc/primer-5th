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
rehash 增加桶数量, 重新分配元素
bucket的数量变了但是位置没有变
 */

int main() {
    unordered_set<int> mySet;
    mySet.rehash(10); 
    for (int i = 0; i < 100; i++)
        mySet.insert(i);

    cout << "bucket count=" << mySet.bucket_count() << endl;
    cout << " position " << mySet.bucket(66) << endl;
    mySet.rehash(100);

    cout << "bucket count=" << mySet.bucket_count() << endl;
    cout << " position " << mySet.bucket(66) << endl;

    return 0;
}