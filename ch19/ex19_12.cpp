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
#include <bitset>
#include <cctype>
#include <functional>
#include <iomanip>
#include <map>
#include <memory>
#include <numeric>
#include <random>
#include <regex>
#include <set>
using namespace std;
/**
> Define a pointer to member that can point to the cursor member of class
Screen. Fetch the value of Screen::cursor through that pointer.
 */

class Screen {
    char cursor;
    public:
    static const char Screen::*data(){
        return &Screen::cursor;
    }
};

int main() {
    auto cursor_ptr = Screen::data();
    Screen s;
    auto cursor_val = s.*cursor_ptr;
    cout << cursor_val << endl;


    return 0;
}