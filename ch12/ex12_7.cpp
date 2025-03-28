#include "ex12_2.h"
using namespace std;

/**
## Exercise 12.7
> Redo the previous exercise , this time using shared_ptr;
 */

auto genVec() { return make_shared<vector<int>>(); }

void readVec(shared_ptr<vector<int>> v) {
    int x;
    for (; cin >> x;) {
        v->push_back(x);
    }
}

void printVec(shared_ptr<vector<int>> v) {
    for (int i = 0; i < v->size(); i++) {
        cout << v->at(i) << " ";
    }
    cout << endl;
}

int main() {
    auto pv = genVec();

    readVec(pv);

    printVec(pv);

    return 0;
}