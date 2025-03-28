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
> Define a function-object class to perform an if-then-else operation: The call
operator for this class should take three parameters. It should test its first
parameter and if that test succeeds, it should return its second parameter;
otherwise, it should return its third parameter.

 */

template <typename T> class Foo {

  public:
    T operator()(bool test, const T &then_value, const T &else_value) const {
        if (test) {
            return then_value;
        } else {
            return else_value;
        }
    }
};

int main() {
    Foo<int> f;

    cout << f(true, 1, 2) << endl;  // output: 1
    cout << f(false, 1, 2) << endl; // output: 2
    return 0;
}
