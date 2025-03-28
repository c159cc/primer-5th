
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
/*
 Write the condition for a while loop that would read ints from the standard
 * input and stop when the value read is equal to 42.
 */
int main()
{

    vector<int> iv = {1, 2, 3};
    for (auto i : iv) {
        cout << ((i & 0x1) ? i * 2 : i) << " ";
    } 
    cout << endl;
    return 0;
}
 