#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include <forward_list>
#include <list>
#include<iterator>
using namespace std;

int main() {
    list<int> a = {1, 2, 3, 4, 5};
    list<int> b = {6, 7, 8, 9, 10};
    list<int> c;

    auto bg = a.begin();
    bg++;
    bg++;
    // a.splice(bg, b); // 1 2 6 7 8 9 10 3 4 5

    // 错误: 正确答案是1 2 8 3 4 5
    // a.splice(bg, b, next(b.begin(), 2)); // 1 2 8 9 10 3 4 5

    a.splice(bg, b, next(b.begin(), 2), next(b.begin(), 4)); // 1 2 8 9 3 4 5

    copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
   


    return 0;
}
