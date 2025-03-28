#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main()
{

    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    for (int(*q)[4] = arr; q != arr + 3; q++)
        for (int *p = *q; p != *q + 4; p++)
            cout << *p << " ";
    cout << endl;
    return 0;
}