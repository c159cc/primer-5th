
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
 *
 * 假设输入都是合法的
 */
int main() {

    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade;
    cout << "Enter a numeric grade: ";
    while (cin >> grade) {
        string res = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
        res += (grade < 60 || grade == 100) ? ""
               : (grade - 50) % 10 >= 7     ? "+"
               : (grade - 50) % 10 <= 3     ? "-"
                                            : "";
        cout << res << endl;
        cout << "Enter a numeric grade: ";
    }

    return 0;
}
