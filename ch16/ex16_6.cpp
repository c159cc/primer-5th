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
> How do you think the library begin and end functions that take an array
argument work? Define your own versions of these functions.
 */

template <typename T, size_t N> T *my_begin(T (&arr)[N]) { return arr; } 

template <typename T, size_t N> T *my_end(T (&arr)[N]) { return arr + N; }

int main() {
    

    return 0;
}