#include <iostream>
#include <string>
using namespace std;
int main()
{
    for (string line; getline(cin, line); cout << "ccOutput=>" + line << endl)
        ;
    return 0;
}