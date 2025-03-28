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
> Using the following definition of ia, copy ia into a vector and into a list.
Use the single-iterator form of erase to remove the elements with odd values
from your list and the even values from your vector.
 */

// 需求在所有的3前面插入6

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    vector<int> ivec(begin(ia), end(ia));
    list<int> ilist(ia, ia + sizeof(ia) / sizeof(ia[0]));

    for (auto elem : ivec)
        cout << elem << " ";
    cout << endl;
    for (auto elem : ilist)
        cout << elem << " ";
    cout << endl;

    auto itVec = ivec.begin();
    while (itVec != ivec.end()) {
        if (!(*itVec & 0x1))
            itVec = ivec.erase(itVec);
        else
            itVec++;
    }

    auto itList = ilist.begin();
    while (itList != ilist.end()) {
        if ((*itList) & 1)
            itList = ilist.erase(itList);
        else
            itList++;
    }

    for (auto elem : ivec)
        cout << elem << " ";
    cout << endl;
    for (auto elem : ilist)
        cout << elem << " ";
    return 0;
}