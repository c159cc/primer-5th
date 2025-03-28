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
> os.write(source, size)

将source中的size个bytes写入到os


 */

int main() {
    cout << "enter a string: ";
    const char *cstr = "hello world";
    cout.write(cstr, 5);

    char arrc1[10], arrc2[10], arrc3[10];
    cin.get(arrc1, 5);
    cin.getline(arrc2, 5);
    cin.read(arrc3, 5);

    cout << "arrc1: " << arrc1 << endl;
    cout << "arrc2: " << arrc2 << endl;
    cout << "arrc3: " << arrc3 << endl;
    return 0;
}