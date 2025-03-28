#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        if (str1.size() == str2.size())
            cout << "The two strings are equal." << endl;
        else
            cout << "The longer one is " + (str1.size() > str2.size() ? str1 : str2) << endl;
    }

    return 0;
}