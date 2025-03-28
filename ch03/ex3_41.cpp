#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
/**
> Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.
 */

int main()
{
    int arrInt[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> vec1(arrInt, arrInt + 10);
    vector<int> vec2(begin(arrInt), end(arrInt));

    for (int i : vec1)
        cout << i << " ";
    cout << endl;
    for (int i : vec2)
        cout << i << " ";
    cout << endl;
    return 0;
}
