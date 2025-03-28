
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
> Given two vectors of ints, write a program to determine whether one vector is
a prefix of the other. For vectors of unequal length, given the vectors
containing 0,1,1 and 2 and 0,1,1,2,3,5,8, respectively your program should
return true.
 */
#include <iostream>

int main() {

    vector<int> v1 = {0, 1, 1, 2};
    vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};

    for(decltype(v1.size()) i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) {
            cout << "v1 is not a prefix of v2" << endl;
            return 0;
        }
    }

    cout << "v1 is a prefix of v2" << endl;

    return 0;
}
