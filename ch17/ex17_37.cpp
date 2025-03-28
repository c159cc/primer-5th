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
#include <map>
#include <memory>
#include <numeric>
#include <random>
#include <regex>
#include <set>
#include<iomanip>
using namespace std;
/**
> Use the unformatted version of getline to read a file a line at a time. Test
your program by giving it a file that contains empty lines as well as lines that
are longer than the character array that you pass to getline.

 */

int main() {
    char line[10]={0}; 
    ifstream in("../data/input.txt");
    while (in.get(line, 10)) {
        cout << "hello="<<line << endl;
    }

    return 0;
}