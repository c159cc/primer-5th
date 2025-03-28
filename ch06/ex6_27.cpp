
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Write a function to swap two int pointers.
 */
#include <iostream>


int sum(initializer_list<int> il) {
    int sum = 0;
    for(auto i : il) {
        sum += i;
    }
    return sum;
}
 
int main(int argc, char  *argv[]) { 
    cout<<sum({1,2,3})<<endl;

    return 0;
}