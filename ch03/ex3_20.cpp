#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

    vector<int> ivec;
    for (int i; cin >> i; ivec.push_back(i))
        ;

    for (size_t i = 0; i != ivec.size(); ++i)
    {
        if (i != 0)
        {
            cout << ivec[i - 1] + ivec[i] << " ";
        }
    }

    cout << endl;
    return 0;
}