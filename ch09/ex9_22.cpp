#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <list>
using namespace std;

/**
> Assuming iv is a vector of ints, what is wrong with the following program? How
might you correct the problem(s)?
```c++
vector<int>::iterator iter = iv.begin(),
mid = iv.begin()+iv.size()/2;

while(iter!=mid)
 if(*iter==some_val)
  iv.insert(iter, 2*some_val)
```
 */

// 需求在所有的3前面插入6

int main() {
    vector<int> iv = {1, 2, 3, 4,   5};
    int some_val = 3;
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;

    while (iter != mid) {
        if (*iter == some_val) {
            iter = iv.insert(iter, 2 * some_val); 
            iter++; // 这里需要加上iter++，因为insert返回的是插入元素的下一个位置
        }

        iter++;
        mid = iv.begin() + iv.size() / 2;
    }

    for(auto i : iv) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}