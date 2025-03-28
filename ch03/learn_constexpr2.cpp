#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

constexpr size_t get_size(size_t i) { return i; }

int main()
{

    const size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][get_size(4)] = {1, 2, 3};

    for(auto &row:ia){
        for(auto &col:row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
     
    return 0;
}