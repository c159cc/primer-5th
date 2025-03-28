#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
 * Write a program to compare two arrays for equality. Write a similar program to compare two vectors.
 */

int compare(int *arr1, int sz1, int *arr2, int sz2)
{
    auto bg1 = arr1;
    auto bg2 = arr2;
    for (int i = 0; i < sz1 && i < sz2; i++)
        if (*(bg1 + i) != *(bg2 + i))
            return *(bg1 + i) < *(bg2 + i) ? -1 : 1;

    if(sz1==sz2)
        return 0;

    return sz1 < sz2 ? -1 : 1;
}

int main()
{

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4};
    int arr4[] = {1, 2, 3, 4, 6};

    cout << compare(arr1, 5, arr2, 5) << endl; // 0
    cout << compare(arr1, 5, arr3, 4) << endl; // 1
    cout << compare(arr1, 5, arr4, 5) << endl; // -1

    return 0;
}
