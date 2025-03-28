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
> Write your own operator new(size_t) function using malloc and use free to
write the operator delete(void*) function.
 */

void *operator new(size_t size) {
    cout << "operator new called with size " << size << endl;
    if (void *p = malloc(size)) {
        cout << "malloc returned " << p << endl;
        return p;
    }
    throw bad_alloc();
}

// 为什么没有调用这个函数?
void operator delete(void *p) noexcept {
    cout << "operator delete called with pointer " << p << endl;
    free(p);
}

int main() {
    int *p = new int(10);
    delete p;
    return 0;
}