
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Write a program that reads two number from the standard input and prints the
result of dividing the first number by the second.
 */
#include <iostream>

int main() {

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        cout << "Result: " << num1 / num2 << endl;
    }

    return 0;
}