#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include "ex7_12.h"
using namespace std; 
/**
> Rewrite the transaction-processing program you wrote for the exercises
in 7.1.2 to use these new functions.
 */
int main() {
    Sales_data  data2(std::cin) ;
    cout << "data2:";
    print(cout, data2) << endl;

    return 0;
}
