
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
> Using an if-else statement, write your own version of the program to generate
the letter grade from a numeric grade.
 */
#include <iostream>
/**
 * 0-59:F, 60-69:D, 70-79:C, 80-89:B, 90-100:A, 100-109:A++
 */
int main() {

    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade;
    cout << "Enter a numeric grade: ";
    while (cin >> grade) {
        if (grade < 60) {
            cout << scores[0] << endl;
        } else if (grade > 100) {
            cout << "Invalid grade" << endl;
        } else {
            // 60 = 1, 69=1, 99 = 4
            size_t idx = (grade - 50) / 10;
            string info = "";
            int remainder = (grade - 50) % 10;
            if (remainder <= 3) {
                info = "-";
            } else if (remainder >= 8) {
                info = "+";
            }
            cout << scores[idx] + info << endl;
        }
        cout << "Enter a numeric grade: ";
    }

    return 0;
}
