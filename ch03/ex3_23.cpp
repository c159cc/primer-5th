#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = v1.begin(); it != v1.end(); ++it)
        *it *= 2;
    for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}
