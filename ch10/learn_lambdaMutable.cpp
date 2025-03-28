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
using namespace std;

/**




 */
void fcn3() {
    size_t v1 = 42;
    auto f = [v1]() mutable { return ++v1; };
    v1 = 0;
    auto j = f();
    cout << "j=" << j << endl;   // j 是43
    cout << "v1=" << v1 << endl; // 0
};
void fcn4() {
    size_t v1 = 42;
    auto f = [v1]() mutable { return ++v1; };
    auto j = f();
    cout << "j=" << j << endl;   // j 是43
    cout << "v1=" << v1 << endl; // 42
};
int main() {
    fcn3();
    fcn4();
    return 0;
}