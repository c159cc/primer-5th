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
#include <memory>
#include <numeric>
#include <set>
using namespace std;
/**
 * 引用和top-level const是如何丢失的?
 */
template <typename F, typename T1, typename T2> void f(F f, T1 t1, T2 t2) {
    cout << "&t1=" << (&t1) << endl;
    f(t1, t2);
};

// 为了让T1类型为int&
void f2(int &p1, int i2) {
    cout << "&p1=" << (&p1) << endl;
    p1 = i2;
}

int main() {

    int i = 3;
    int &ref_i = i;
    cout << "&i=" << (&i) << endl;
    cout << "&ref_i=" << (&ref_i) << endl;
    f(f2, ref_i, 4);   // 这里ref_i是int&，会被正确推导
    cout << i << endl; // 4
    return 0;
}