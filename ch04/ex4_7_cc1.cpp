
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
/*
> What does overflow mean? Show three expressions that will overflow.
 */
int main()
{
    short s1 = 32767;
    short s2 = -32768;
    short s3 = 0;
    short s4 = -1;
    short s5 = -s2;

    // 最小值取反
    cout << "最小值取反 = " << s5 << endl; // -32768
    // 最大值向前
    cout << "最大值向前 = " << (++s1) << endl;  // -32768
    // 最小值先后
    cout << "最小值先后 = " << (--s2) << endl; // 32767
    // 0向后
    cout << "0向后 = " << (--s3) << endl;   // -1
    // -1向前
    cout << "-1向前 = " << (++s4) << endl; // 0
    return 0;
}

/**
 * 2 10 1024
 * 2 11 2048
 * 2 12 4096
 * 2 13 8192
 * 2 14 16384
 * 2 15 32768
 * 2 16 65536
 * 15位数最多表示为32767
 * 16位数最多表示为65535
 * 
 * 当32767 + 1 移除, 符号位的0变为1, -1+15个0
 */