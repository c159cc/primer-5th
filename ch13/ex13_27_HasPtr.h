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
vs


 */
class HasPtr {
  public:
    HasPtr(const string &s = string())
        : ps(new string(s)), i(0), use(new size_t(1)) {};
    HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i), use(hp.use) {
        ++(*use);
    };
    HasPtr &operator=(const HasPtr &hp);

    ~HasPtr();

  private:
    string *ps;
    int i;
    size_t *use;
};

HasPtr::~HasPtr() {
    if (--(*use) == 0) {
        delete ps;
        delete use;
    }
}

HasPtr &HasPtr::operator=(const HasPtr &hp) {
    ++(*hp.use);
    if (--(*use) == 0) {
        delete ps;
        delete use;
    }
    ps = hp.ps;
    i = hp.i;
    use = hp.use;
    return *this;
}