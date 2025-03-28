
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
>  Write and test your version of fact.
 */
#include <iostream>

int fact(int n) {
    int i = n, res = 1;
    while (i > 0) {
        res *= i--;
    }
    return res;
}

int main() {

    int num1;
    cout << "Enter one numbers: ";
    cin >> num1;

    int rest = fact(num1);

    cout << "Factorial of " << num1 << " is " << rest << endl;

    return 0;
}