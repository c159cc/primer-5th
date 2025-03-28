
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// sizeof string或者vector返回 the fixed type of these types

int main() {

    int arr[3] = {1, 2, 3};

    auto arr2 = &arr;
    auto &arr3 = arr;
    for(auto i : *arr2){
        cout << i << " ";
    }
    cout << endl;

    for(auto i : arr3){
        cout << i << " ";
    }
    cout << endl;


    return 0;
}
