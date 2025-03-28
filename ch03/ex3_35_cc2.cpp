#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
 * 使用指针设置数组的每个元素为0
 */
int main()
{

    const size_t SIZE = 10;
    int arr[SIZE];
    for (auto bg = arr; bg != arr + SIZE; bg++)
        *bg = 0;

    return 0;
}
