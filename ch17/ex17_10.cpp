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
#include <set>
using namespace std;
/**
> Using the sequence 1,2,3,5,8,13,21, initialize a bitset that has a 1 bit in
each position corresponding to a number in this sequence . Default initialize
another bitset and write a small program to turn on each of the appropriate
bits.

.
 */

int main() {
    vector<int> seq = {1, 2, 3, 5, 8, 13, 21};
    bitset<32> bits1, bits2;
    for (int i : seq) {
        bits1.set(i - 1); // set the i-th bit to 1
    }

    for (int i = 0; i < 32; i++) {
        bits2[i] = bits1[i];
    }

    cout << bits2.to_string() << endl; // output: 1111111111

    return 0;
}