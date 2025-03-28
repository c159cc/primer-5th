#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{

    vector<int> ivec;
    for (int i; cin >> i; ivec.push_back(i))
        ;

    if(ivec.size()<1){
        return -1;
    }
    for (size_t i = 0; i != ivec.size()-1; ++i)
        cout << ivec[i] + ivec[i + 1] << " ";

    cout << endl;
    return 0;
}