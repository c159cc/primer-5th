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

    for (size_t i = 0; i < svec.size(); i += 8)
    {
        for (size_t j = 0; j < 8 && j + i < svec.size(); j++)
        {
            cout << svec[j + i] << " ";
        }
        cout << endl;
    }

    return 0;
}