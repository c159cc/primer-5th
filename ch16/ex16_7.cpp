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
> Write a constexpr template that returns the size of a given array.
 */
 

 template<typename T, size_t N>
 constexpr size_t array_size(T (&arr)[N]) {
    return N;
}

int main() {
    
    int arr[5] = {1, 2, 3, 4, 5};
    cout<<array_size(arr)<<endl; // output: 5
    return 0;
}