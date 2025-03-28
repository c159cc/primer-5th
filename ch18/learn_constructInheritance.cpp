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
struct Base1 {
    Base1() = default;
    Base1(const std::string &);
    Base1(std::shared_ptr<int>);
};

struct Base2 {
    Base2() = default;
    Base2(const std::string &);
    Base2(int);
};

// Error: D1::D1(const string&)
struct D1 : public Base1, public Base2 {
    using Base1::Base1;
    using Base2::Base2;
};

int main() {

    cout << "main" << endl;

    return 0;
}