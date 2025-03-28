
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
    unsigned short s1 = 65535;
    unsigned short s2 = s1 + 1;
    unsigned short s3 = 0;
    unsigned short s5 = 1;
    unsigned short s4 = s3-s5; 
 
    // 最大值向前
    cout << "最大值向前 = " << s2 << endl; // 0
    // 0向后
    cout << "0向后 = " << s4 << endl; // 65535
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

