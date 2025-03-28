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
#include <numeric>
using namespace std;

/**

> Implement your own version of elimDups. Test your program by printing the
vector after you read the input, after the call to unique, and after the call to
erase.
 */

void printVec(const vector<int> &ivec) {
    for (auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
}
 void elimDups(vector<int>& ivec) {
    sort(ivec.begin(), ivec.end());
    cout << "before unique" << endl;
    printVec(ivec);
    auto last = unique(ivec.begin(), ivec.end());
    cout << "before erase" << endl;
    printVec(ivec);
    ivec.erase(last, ivec.end());
}


int main() {
    vector<int> ivec = {1,9, 9,  2, 8, 9,   3, 4, 5, 6, 7, 10};
    cout<<"before elimDups"<<endl;
    printVec(ivec);
    elimDups(ivec);
    cout<<"after elimDups"<<endl;
    printVec(ivec); 
    return 0;
    cout << "ivec: "<<ivec.size()<<endl;
    return 0;
}