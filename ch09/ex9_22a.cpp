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

void double_and_insert(std::vector<int> &v, int some_val) {
    auto mid = [&] { return v.begin() + v.size() / 2; };
    for (auto curr = v.begin(); curr != mid(); ++curr)
        if (*curr == some_val)
            ++(curr = v.insert(curr, 2 * some_val));
};

int main() {
    vector<int> iv = {1, 2, 3, 4, 5};
    double_and_insert(iv, 3);

    for (auto i : iv) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}