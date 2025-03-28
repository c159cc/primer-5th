#include <iostream>
#include <string>
using namespace std;
int main()
{
    string rst, str;
    while (cin >> str)
    {
        rst += str;
    }
    cout << "rst=" << rst << endl;

    return 0;
}