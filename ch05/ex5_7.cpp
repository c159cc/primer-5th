
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
> Correct the errors in each of the following code fragments:
 */
#include <iostream>

// cc else if 才能读取int值
int get_value() {
    int i;
    cin >> i;
    return i;
}
int main() {

    if (int ival = get_value())
        cout << "ival = " << ival << endl;
    else if (!ival)
        cout << "ival = 0 \n";
    return 0;
}
