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
> What if the parameter in f were const numbered& ? Does that change the output?
If so, why? What output gets generated?
 */

class numbered {
  public:
    numbered() : mysn(++count) {}

    numbered &operator=(const numbered &rhs) {
        mysn = ++count;
        return *this;
    }

    numbered(const numbered &rhs) : mysn(++count) {}
    int mysn;

  public:
    static int count;
};

int numbered::count = 0;

void f(const numbered& s) { cout << s.mysn << endl; }
 
int main() {
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
    return 0; }