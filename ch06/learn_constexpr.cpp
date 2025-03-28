
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace std;
/*
>  理解必须只有一个return 语句?
 */
#include <iostream>
constexpr int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        int result = n;
        for (int i = n - 1; i > 0; --i) {
            result *= i;
        }
        return result;
    }
}

constexpr bool bEqual(int n) { return n == 3; }

int main() {
    int i = 2;
    // int arr[factorial(i)] = {1, 2};
    int arr[factorial(2)] = {1, 2};
    cout << arr[0] << " " << arr[1] << endl; // 1 2 

    
    return 0;
}
