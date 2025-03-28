#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

    vector<string> svec;
    string str;
    while (cin >> str)
        svec.push_back(str);

    for (auto &s : svec)
        for (auto &c : s)
            c = toupper(c);

    for (size_t i = 0; i != svec.size(); i++)
    {
        if (i != 0 && i % 8 == 0)
            cout << endl;
        cout << svec[i] << " ";
    }

    return 0;
}