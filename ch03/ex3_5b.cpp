#include <iostream>
#include <string>
using namespace std;
int main()
{
    string rst, str2;
    while (cin   >> str2)
    {
        rst += str2+" ";
    }
    cout << "rst="<<rst << endl;

    return 0;
}