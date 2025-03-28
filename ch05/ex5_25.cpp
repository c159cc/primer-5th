
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Revise your program from the previous exercise to use a try block to catch the
exception. The catch clause should print a message to the user and ask them to
supply a new number and repeat the code inside the try.
 */
#include <iostream>

int main() {

    int num1, num2;
    cout << "Enter two numbers: ";

    while (cin >> num1 >> num2) {
        try {
            if(num2 == 0)
                throw runtime_error("除数不能为0");
            cout << "Result: " << num1 / num2 << endl;
        } catch (runtime_error e) {
            cout << "Error: " << e.what() << endl;
            cout << "是否继续? (y/n) ";
            char c;
            cin >> c;
            if (!cin ||c == 'n') {
                break;
            }
        }
    }

    return 0;
}