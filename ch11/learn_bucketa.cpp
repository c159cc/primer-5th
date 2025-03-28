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
    std::unordered_set<int> mySet;
    // 手动设置桶的数量，这里设置为 10
    mySet.rehash(10);
    // 插入一个元素
    mySet.insert(1);
    // 输出元素数量
    std::cout << "Number of elements: " << mySet.size() << std::endl;
    // 输出桶的数量
    std::cout << "Number of buckets: " << mySet.bucket_count() << std::endl;
    // 输出负载因子
    std::cout << "Load factor: " << mySet.load_factor() << std::endl;
    // 手动计算负载因子
    double manualLoadFactor =
        static_cast<double>(mySet.size()) / mySet.bucket_count();
    std::cout << "Manually calculated load factor: " << manualLoadFactor
              << std::endl;

    return 0;
}