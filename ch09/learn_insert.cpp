#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include <forward_list>
#include <list>
using namespace std;

/**
insert返回的迭代器指向谁?
 */

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {6, 7, 8, 9, 10};

    // 6之前插入4,5 返回4
    auto res = v2.insert(v2.begin(), v.begin() + 3, v.end());
    cout << "res:" << *res << endl; // res:4

    // 4之前插入2个12
    auto res2 = v2.insert(res, 2, 12);
    cout << "res2:" << *res2 << endl;         // res2:12
    cout << "res2+1:" << *(res2 + 1) << endl; // res2:12
    cout << "res2+2:" << *(res2 + 2) << endl; // res2:4

    // 12之前插入13,14,15
    auto res3 = v2.insert(res2, {13, 14, 15});
    cout << "res3:" << *res3 << endl; // res3:13

    // 13,14,15,4,5,6,7,8,9,10
    for (auto i : v2)
        cout << i << " ";
    cout << endl;

    // list和forward_list返回第一个插入还是最后一个插入
    list<int> l = {1, 2, 3, 4, 5};
    auto resList = l.insert(l.begin(), {6, 7, 8});
    cout << "resList:" << *resList << endl; //  猜测: 6
    for (auto i : l)
        cout << i << " ";
    cout << endl;

    forward_list<int> flst = {1, 2, 3, 4, 5};
    auto restFlst = flst.insert_after(flst.begin(), {6, 7, 8});
    cout << "restFlst:" << *restFlst << endl; // 猜测为8
    for (auto i : flst)
        cout << i << " ";
    cout << endl;
    return 0;
}
