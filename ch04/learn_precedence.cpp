
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {1, 5, 10};
    auto iter = v.begin();
    cout << (++*iter) << endl; //2

    v = {1, 5, 10};
    iter = v.begin();
    cout << (*++iter) << endl;// 5 
    
    iter = v.begin()+1;
    cout << (*iter++) << endl; // 10还是6 结果是5 哈哈
    return 0;
}
