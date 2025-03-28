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
#include <bitset>
#include <cctype>
#include <functional>
#include <iomanip>
#include <map>
#include <memory>
#include <numeric>
#include <random>
#include <regex>
#include <set>
using namespace std;
/**
using声明不允许出现相同签名的函数, using指令允许
 */

namespace A {
void foo(int i) { cout << "A foo(int i)" << i << endl; }
} // namespace A

using namespace A;
void foo(int i) { cout << "foo(int i) " << i << endl; };

int main() {
    ::foo(1);
    return 0;
}