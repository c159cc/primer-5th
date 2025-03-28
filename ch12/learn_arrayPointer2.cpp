#include "ex12_2.h"
using namespace std;

/**
int arr[42];
int *p = arr;
p和arr有没有什么区别?
没有什么区别

1. 类型不同
2. sizeof() 的结果不同
3. arr是常量指针不可修改
 */

int main() {
    int arr[42];
    int *p = arr;
    

    // &arr 表示指针对象地址, 地址里面存放了数组的第一个元素的地址
    cout << " &arr=" << &arr << endl;
    cout << " &p=" << &p << endl; 


    cout<<"arr "<<arr<<endl;
    cout<<"p "<<p<<endl;
    return 0;
}