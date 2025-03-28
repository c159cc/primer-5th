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
> Write the assignment operator for the HasPtr class from exercise 13.5
in 13.1.1 . As with the copy constructor, your assignment operator should copy
the object to which ps points.
 */
class HasPtr {
  public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
    HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i) {}
    HasPtr &operator=(const HasPtr &hp);

  private:
    string *ps;
    int i;

  public:
    ~HasPtr() { delete ps; }
};

HasPtr &HasPtr::operator=(const HasPtr &hp) {
    if (this == &hp) {
        return *this;
    }
    delete ps;
    ps = new string(*hp.ps);
    i = hp.i;

    return *this;
}

int main() { return 0; }