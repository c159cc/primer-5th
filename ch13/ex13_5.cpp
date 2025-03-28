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
> Given the following sketch of a class, write a copy constructor that copies
all the members. Your constructor should dynamically allocate a new
string(12.1.12) and copy the object to which ps points, rather than copying ps
itself.
```c++

class HasPtr{
  public:
  HasPtr(const string &s = string()):ps(new string(s)), i(0){ }
  private:
  string *ps;
  int i;
};
```
 */
class HasPtr {
  public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
    HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i) {}
  private:
    string *ps;
    int i;
};
int main() { 

    return 0;
}