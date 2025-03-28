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
Write code to test your answers to the previous two exercises.


 */
class Base {
  public:
    void pub_mem();

  protected:
    int prot_mem;

  private:
    char priv_mem;
};

struct Pub_Derv : public Base {
    void memfcn(Base &b) { b = *this; }
};
struct Priv_Derv : private Base {
    void memfcn(Base &b) { b = *this; }
};
struct Prot_Derv : protected Base {
    void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Public : public Pub_Derv {
    void memfcn(Base &b) { b = *this; }
};
struct Derived_from_Private : public Priv_Derv {
  // Base都变得不可访问了
    // void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Protected : public Prot_Derv {
    void memfcn(Base &b) { b = *this; }
};

int main() {
    Pub_Derv d1;
    Priv_Derv d2;
    Prot_Derv d3;

    Derived_from_Public dd1;
    Derived_from_Private dd2;
    Derived_from_Protected dd3;
    Base *p = &d1; // d1 Pub_Derv
    // p = &d2;       // d2 Priv_Derv 不可以
    // p = &d3;       // d3 Prot_Derv 不可以
    // p = &dd1;      // dd1 Derived_from_Public
    // p = &dd2;      // dd2 Derived_from_Private 不可以
    // p = &dd3;      // dd3 Derived_from_Protected 不可以

    return 0; }