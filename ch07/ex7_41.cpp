#include "ex7_41.h"
#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
> Rewrite your own version of the Sales_data class to use delegating
constructors. Add a statement to the body of each of the constructors that
prints a message whenever it is executed. Write declarations to construct a
Sales_Data objet in every way possible. Study the output until you are
certain you understand the order of execution among delegating constructors.
 */

int main() {
    cout<<"3 param"<<endl;
    Sales_data("abc", 10, 20.0);

    cout << "1 param" << endl;
    Sales_data s1("hello");

    cout << "default" << endl;
    Sales_data s2;

    cout << "istream" << endl;
    Sales_data s3(cin);

    return 0; }