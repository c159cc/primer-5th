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
>  Write a template version of the print function from 6.2.4 that takes a
reference to an array and can handle arrays of any size and any element type.
 
 */

template <typename T, size_t N>
void print(const T (&arr)[N]) {
    for (size_t i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    print(arr); // output: 1 2 3 4 5

    string strs[3] = {"hello", "world", "!"};
    print(strs); // output: hello world !

    return 0;
}