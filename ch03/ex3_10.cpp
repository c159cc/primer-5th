#include <iostream>
#include <string>
using namespace std;
int main()
{
    string rst, str2;
    while (cin   >> str2)
    {
        for(auto &c : str2){
            if(!ispunct(c)){
                rst += c;
            }
        }
    }
    cout << "rst="<<rst << endl;

    return 0;
}