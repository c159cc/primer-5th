#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <list>
using namespace std;

/**
> How would you initialize a vector<double> from a list<int>? From a vector<int>? Write code to check your answer.
 */

 
int main() {

 
    list<int> li = {1, 2, 3, 4, 5};
    vector<int> vi{1, 2, 3, 4, 5};


    vector<double> vd(li.begin(), li.end()); // from list<int>
    vector<double> vd2(vi.begin(), vi.end()); // from vector<int>

    // check if the initialization is correct
    for (int i = 0; i < vd.size(); i++) {
        cout<<vd[i]<<" ";
    }
    cout << endl;

    for (int i = 0; i < vd2.size(); i++) {
        cout << vd2[i] << " ";
    }
    cout << endl; 
    return 0;
}
