#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
/**
> Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.

修改建议: 不要手动设置长度
 */

const char ca1[] = "hello", ca2[] = "he";

int main()
{

    constexpr size_t len = strlen(ca1) + strlen(" ") + strlen(ca2) + 1;
    char ca3[len];

    strcpy(ca3, ca1);
    strcat(ca3, " ");
    strcat(ca3, ca2);
    cout << "ca3=>" << ca3 << endl;

    return 0;
}
