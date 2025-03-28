#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <list>
using namespace std;

/**
> Write a program that fetches the first element in a vector using at, the
subscript operator, front, and begin. Test your program on an empty vector.
 */

// 需求在所有的3前面插入6

int main() {
    vector<int> iv;
    // cout<<iv.at(0)<<endl; //out_of_range

    // cout << iv[0] << endl;       // segment fault
    // cout << iv.front() << endl;  // segmentation fault
    // cout << *iv.begin() << endl; // segmentation fault
    try{
        cout << iv.at(0) << endl; // out_of_range
    }catch(const exception& e){
        cout << e.what() << endl;
    }

    cout << "ok" << endl;
    return 0;
}