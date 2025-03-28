
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
    unsigned short us1 = 65535;
    unsigned short us2 = 0;

    cout << "s1 = " << (++s1) << endl; //-32768
    cout << "us1 = " << (++us1) << endl; // 0
    cout << "us2 = " << (--us2) << endl; // 65535
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