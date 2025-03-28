
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
> Using Table 4.12 explain what the following expression does:

someValue ? ++x, ++y: --x, --y;
 */
int main() {

    int x = 10, y = 20;
    bool someValue = true;
    someValue ? ++x, ++y : --x, --y;
    cout << "x = " << x << " y = " << y << endl; // x=11 y=20

    x = 10, y = 20;
    bool otherValue = false;
    otherValue ? ++x, ++y : --x, --y;
    cout << "x = " << x << " y = " << y << endl; //  x=9 , y= 19

 
    return 0;
}
