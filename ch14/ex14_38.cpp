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
> Write a class that tests whether the length of a given string matches a given
bound. Use that object to write a program to report how many words in an input
file are of sizes 1 through 10 inclusive.
 */
class IsInRange {
  public:
    IsInRange(int lower, int upper) : lower_(lower), upper_(upper) {}
  public:
    bool operator()(string const &str) const { return str.size() >= lower_ && str.size() <= upper_; }

    private:
    int lower_;
    int upper_;
};

int main() {

    IsInRange isInRange(2, 10);
    cout << "isInRange(hello)" << isInRange("hello") << endl;
    cout << "isInRange(a)" << isInRange("a") << endl;

    return 0;
}