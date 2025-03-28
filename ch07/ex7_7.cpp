 #include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include "ex7_6.h"
using namespace std;
using namespace std;
/**
> Rewrite the transaction-processing program you wrote for the exercises
in 7.1.2 to use these new functions.
 */
 
int main() {
    Sales_data total; // 持有和
    if (read(cin, total)) {
        Sales_data trans; // 持有当前值
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn()) {
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}    

 
