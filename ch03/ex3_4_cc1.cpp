#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        if (str1 == str2)
            cout << "The two strings are equal." << endl;
        else
            cout << "The larger one is " + (str1 > str2 ? str1 : str2) << endl;
    }

    return 0;
}