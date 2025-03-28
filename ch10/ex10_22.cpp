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
#include <numeric>
#include<functional>
using namespace std;

/**

> Rewrite the program to count words of size 6 or less using functions in the place of the lambdas.


 */

void printVec(const vector<string> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}

bool lessEqual(const string &str, int cnt) { return str.size() <= cnt; }

int lessEqualThan6(const vector<string> &svec) {
    // 适配函数会收到1个参数, 传递给lessEqual作为第一个参数
    int cnt =
        count_if(svec.begin(), svec.end(), bind(lessEqual, placeholders::_1, 6));
    return cnt;
}

int main() {
    vector<string> words = {"hello",  "world", "apple",
                            "banana_123", "pear",  "grape"};

    cout << lessEqualThan6(words) << endl; // output: 2
    return 0;
}
 