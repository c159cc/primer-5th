
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
> The program in this section used the prefix increment and decrement operators.
Explain why we used prefix nad not postfix. What changes would have to be made
to use the postfix versions? Rewrite the program using postfix operators.
 */
int main() {
    vector<int> ivec = {1, 2, 3, 4, 5};
    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); )
        ivec[ix++] = cnt--;

    for (auto x : ivec)
        cout << x << " ";
    cout << endl;
    return 0;
}
