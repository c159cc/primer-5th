#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter two strings: ";
    while (cin >> str1 >> str2)
    {
        cout << "str1=" << str1 << ",str2=" << str2 << endl;
        if (str1.compare(str2) == 0)
            cout << "The two strings are equal." << endl;
        else if (str1 < str2)
        {
            cout << "str1更小" << endl;
        }
        else
        {
            cout << "str2更小" << endl;
        }
        cout << "Enter two strings: ";
    }

    return 0;
}