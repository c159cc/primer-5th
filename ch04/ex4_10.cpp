
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
 
    int num;
    while (cin >> num && num!= 42) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
 