
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
> Use the comma operator to rewrite the while loop from so that it no longer
requires a block. Explain whether this rewrite improves or diminishes the
readability of this code.
 */
#include <iostream>
int main() {
    int sum = 0, val = 1;
    while (val <= 10)
        sum += val, ++val;

    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
