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
> Write a class like PrintString that reads a line of input from an istream and
returns a string representing what was read. If the read fails , return the
empty string.

 */

class PrintString {
  public:
    string operator()() const {
        string s;
        getline(cin, s);

        return cin ? s : string();
    }
};

int main() {
    PrintString ps;

    cout << "Enter a line of input: ";
    string s = ps();
    cout << s << endl;
    return 0;
}
