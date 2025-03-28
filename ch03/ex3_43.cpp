
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
/**
Write three different versions of a program to print the elements of ia. One version should use a range for to manage the iteration, the other two should use an ordinary for loop in one case using subscripts and in the other using pointers. In all three programs write all the types directly. That is, do not use a type alias, auto, or decltype to simplify the code.
 */

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (int(&p)[4] : ia)
    {
        for (int i : p)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    for (int(*p)[4] = ia; p != ia + 3; ++p)
    {
        for (int *q = *p; q != *p + 4; ++q)
        {
            cout << *q << " ";
        }
        cout << endl;
    }

    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 4; ++j)
        {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    // int(*p)[4] = ia;
    // int(*p)[3][4] = ia;
    // ia的类型是什么?

    int int_arr[3] = {1, 2, 3};
    // int(*b)[3] = int_arr; // 指针类型;
    // int_arr 是什么类型, 会被自动转化为 int*, 表示一个指针指向int
    int *a = int_arr;     // 指针类型;
    int(&b)[3] = int_arr; // 引用类型;
    // int(&c)[3] = a; // 为什么a也表示int*, int_arr也表示int*

    int *(&c) = a;             // c 引用一个int* 对象
    cout << "c:" << c << endl; // 输出: c:0x61fd74
    // 如果是一个引用, 它的类型必须和右操作数类型一样
    // int *(&d) = int_arr;

    // b 表示引用int[3], d表示引用int*, 当等号左边为引用, 右边的类型不转化

    return 0;
}
