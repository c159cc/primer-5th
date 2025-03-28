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

    int arrInt2[10];

    for (int i = 0; i != vec1.size(); i++)
        arrInt2[i] = vec1[i];

    for (auto t : arrInt2)
        cout << t << " ";
    cout << endl;

    return 0;
}
