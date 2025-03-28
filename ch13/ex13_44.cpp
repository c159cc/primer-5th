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

#include "ex13_30_HasPtr.h"
#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;

/**
 * > Write a class named String that is simplified version of the library string
 * class. Your class should have at least a default constructor and a
 * constructor that takes a pointer to a C-style string. Use an allocator to
 * allocate memory that your String class uses.
 */

class String {
  public:
    String() : elements(nullptr),end(nullptr )  {}
    String(const char *s);

  private:
    char *elements;
    char *end; 
    allocator<char> alloc;
};

String::String(const char *s)  {
    size_t len = strlen(s);
    elements = alloc.allocate(len); 
    uninitialized_copy_n(s, len, elements);
}

