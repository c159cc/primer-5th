#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> v1 = {"apple", "banana", "orange", "grape"};
    vector<string> v2 = {"cherry"};

    v2 = v1;
    for (auto s : v2)
        cout << s << " ";
    cout << endl;
    return 0;
}