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
using指令把名字提升到外部作用域?
 */

 namespace A{
 int i=1, j=2;
 }

 void f(){
    using namespace A;
    cout << i << " " << j << endl;
 }

int main() {
    f();
    // cout << i << " " << j << endl;
    return 0;
}