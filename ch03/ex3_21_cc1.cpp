#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 最后是跟逗号还是空格
void check_and_print(const vector<int> &v)
{
    cout << "Size of vector: " << v.size() << " contents:[";
    for(auto it = v.cbegin(); it != v.cend(); ++it)
    cout<<*it<<(it!= v.cend()-1? ", " : "");
    cout<<"]"<<endl;
}
void check_and_print(const vector<string> &v)
{
    cout << "Size of vector: " << v.size() << " contents:[";
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        cout << *it << (it != v.cend() - 1 ? ", " : "");
    cout << "]" << endl;
}

int main()
{

    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    check_and_print(v1);
    check_and_print(v2);
    check_and_print(v3);
    check_and_print(v4);
    check_and_print(v5);
    check_and_print(v6);
    check_and_print(v7);
}
