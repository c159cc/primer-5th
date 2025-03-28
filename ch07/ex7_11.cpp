 #include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include "ex7_11.h"
using namespace std; 
/**
> Rewrite the transaction-processing program you wrote for the exercises
in 7.1.2 to use these new functions.
 */
 
int main() {
    Sales_data data1, data2(std::cin),data3("book"),data4("chair", 5, 15.0);
    cout << "data1:";
    print(cout, data1) << endl;
    cout << "data2:";
    print(cout, data2) << endl;
    cout << "data3:";  
    print(cout, data3) << endl;
    cout << "data4:";
    print(cout, data4) << endl;
 

    return 0;
}    

 
