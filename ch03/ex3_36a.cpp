#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
 * Write a program to compare two arrays for equality. Write a similar program to compare two vectors.
 */

bool bEqual(int *bg1, int *ed1, int *bg2, int *ed2)
{
    if (ed1 - bg1 != ed2 - bg2)
        return false;

    for (auto b1 = bg1, b2 = bg2; b1 != ed1 && b2 != ed2; ++b1, ++b2)
        if (*b1 != *b2)
            return false;

//  表示长度相等, 元素也相等
    return true;
}

int main()
{

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4};
    int arr4[] = {1, 2, 3, 4, 6};

    cout << bEqual(arr1, arr1 + 5, arr2, arr2 + 5) << endl; // true
    cout << bEqual(arr1, arr1 + 5, arr3, arr3 + 4) << endl; // false
    cout << bEqual(arr1, arr1 + 5, arr4, arr4 + 5) << endl; // false



    return 0;
}
