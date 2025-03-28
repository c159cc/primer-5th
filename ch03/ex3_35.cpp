#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
 * 使用指针设置数组的每个元素为0
 */
int main()
{

    int arr[10] = {};
    auto b = begin(arr);
    auto e = end(arr);
    for (; b != e; ++b)
    {
        *b = 0;
    }
    return 0;
}
