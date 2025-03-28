
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
> Write a program using a series of if statements to count the number of vowels
in text read from cin.
 */
#include <iostream>

int main() {
    int aCnt = 0, bCnt = 0, cCnt = 0, otherCnt = 0, blankCnt = 0, tabCnt = 0,
        newlineCnt = 0, ffCnt = 0, fiCnt = 0, flCnt = 0;
    char pre = '\0';

    char ch;
    while (cin >> ch) {
        switch (ch) {
        case 'a':
        case 'A':
            aCnt++;
            break;
        case 'b':
        case 'B':
            bCnt++;
            break;
        case 'c':
        case 'C':
            cCnt++;
            break;
        case ' ':
            blankCnt++;
            break;
        case '\t':
            tabCnt++;
            break;
        case '\n':
            newlineCnt++;
            break;
        case 'f':
            pre == 'f' ? ++ffCnt : ffCnt;
            break;
        case 'i':
            if (pre == 'f')
                ++fiCnt;
            break;
        case 'l':
            if (pre == 'f')
                ++flCnt; 
            break;
        default:
            otherCnt++;
            break;
        }

        pre = ch;
    }
    cout << "a: " << aCnt << " ";
    cout << "b: " << bCnt << " ";
    cout << "c: " << cCnt << " ";
    cout << "other: " << otherCnt << " ";
    return 0;
}
