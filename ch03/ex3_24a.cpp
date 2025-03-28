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

    for(auto s=ivec.begin(), e=ivec.end()-1; s<= e; ++s,--e){
        cout<<*s + *e<<" ";
    }
    cout << endl;
    return 0;
}
