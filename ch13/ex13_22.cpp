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
> Assume that we want HasPtr to behave like a value. That is , each object
should have its own copy of the string to which the objects point. We'll show
the definitions of the copy-control members in the next section. However, you
already know everything you need to know to implement these members. Write the
HasPtr copy constructor and copy-assignment operator before reading on.


 */

class HasPtr {
  public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
    HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i) {}
    HasPtr &HasPtr::operator=(const HasPtr &hp);

  private:
    string *ps;
    int i;

  public:
    ~HasPtr() { delete ps; }
};



HasPtr &HasPtr::operator=(const HasPtr &hp) {
    if (this != &hp) {
        delete ps;
        ps = new string(*hp.ps);
        i = hp.i;
    }
    return *this;
}
int main() {}