
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
> The last example in this section that jumped back to begin could be better
written using a loop. Rewrite the code to eliminate the goto.
 */
#include <iostream>

int get_size() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    return size;
}
int main() {

    for (int sz = get_size(); sz <= 0; sz = get_size())
        ;

    return 0;
}
