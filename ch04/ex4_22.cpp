
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
 Write the condition for a while loop that would read ints from the standard
 * input and stop when the value read is equal to 42.
 */
int main() {
    unsigned score;
    for (; cin >> score;) {
        string res = (score > 90) ? "high pass"
                     : score < 60 ? "fail"
                     : score < 75 ? "low pass"
                                  : "pass";
        cout << "Score: " << score << " Result: " << res << endl;

        if (score > 90) {
            res = "high pass";
        } else if (score < 60) {
            res = "fail";
        } else if (score < 75) {
            res = "low pass";
        } else {
            res = "pass";
        }
        cout << "Score: " << score << " Result: " << res << endl;
    }
    return 0;
}
