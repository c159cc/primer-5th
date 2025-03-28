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
using namespace std;

/**
> Write a program that defines a multimap of authors and their works. Use find
to find an element in the multimap and erase that element. Be sure your program
works correctly if the element you look for is not in the map.
 */

int main() {
    multimap<int, string> m1 = {
        {1, "one"}, {2, "two"}, {3, "three"}, {2, "two"}};

    // m1.erase(5);
    // cout<<m1.size()<<endl; // output: 3

    // 如果现在遍历的过程中删除呢?
    for(auto it = m1.begin(); it!= m1.end();) {
        if(it->second == "two") {
            it = m1.erase(it);
        } else {
            it++;
        }
    }
    cout<<m1.size()<<endl; // output: 2


    return 0;
}