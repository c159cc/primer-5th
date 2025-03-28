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
> Write a class that tests whether two values are equal. Use that object and the
library algorithms to write a program to replace all instances of a given value
on a sequence

 */
class BeEqual {
  public:
    bool operator()(char s1) { return s1 == 'o'; }
};

int main() {

    string s1 = "hello world";
    replace_if(s1.begin(), s1.end(), BeEqual(), 'A');

    cout << s1 << endl; // prints "hellA Awrld"
    return 0;
}