#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
 * 打印相邻两个数的和, 第一个和最后一个的和
 */
int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if (ivec.size() < 1)
    {
        return -1;
    }

    auto it = ivec.begin();
    int pre = *it;
    for (; it != ivec.end(); it++)
    {
        cout << *it + pre << " ";
        pre = *it;
    }
    cout << endl;
    return 0;
}
