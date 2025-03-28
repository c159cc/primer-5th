#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
using namespace std;

/**
> Write a program to process a vector<string>s whose elements represent integral
values. Produce the sum of all the elements in that vector. Change the program
so that it sums of strings that represent floating-point values.


1. auto const& 字符串通常用const&
 */

int main() {
    vector<string> nums = {"1", "2", "3", "4", "5"};
    int sum = 0;
    for (auto const& num : nums) {
        sum += stoi(num);
    }
    cout << "Sum of integers: " << sum << endl;

    vector<string> floats = {"1.5", "2.3", "3.7", "4.2", "5.9"};
    double sum_float = 0.0;
    for (auto const & f : floats) {
        sum_float += stod(f);
    }
    cout << "Sum of floats: " << sum_float << endl;

    return 0;
}