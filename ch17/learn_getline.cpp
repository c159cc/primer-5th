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
没有换行getline无法读取?

 */

int main() {
    fstream inOut("../data/getline.txt");
    if (!inOut) {
        cout << "open file error" << endl;
        return -1;
    }

    string line;
    getline(inOut, line);

    cout << "line: " << line << endl;

    return 0;
}