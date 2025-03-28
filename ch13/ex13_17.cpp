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
> Write version of numbered and f corresponding to the previous three exercises
and check whether you correctly predicted the output.

 */
class numbered {
  public:
    numbered() { mysn = unique++; }

    numbered(const numbered &n) { mysn = unique++; }

    int mysn;
    static int unique;
};

int numbered::unique = 10;

void f(const numbered &s) { std::cout << s.mysn << std::endl; }

int main() {
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
}