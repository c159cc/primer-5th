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
> Write your own version of DebugDelete.
 */
  
 class DebugDelete{
    public:
      DebugDelete(ostream &_os) : os(_os) {}

      template<typename T>
      void operator()(T *ptr) const {
        os << "Deleting unique_ptr   "<< endl;
        delete ptr;
      }
    private:
      ostream &os;
 };