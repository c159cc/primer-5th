
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
    int aCnt = 0, bCnt = 0, cCnt = 0, otherCnt = 0;

    char ch;
    while(cin>>ch){
        switch(ch){
            case 'a':
                aCnt++;
                break;
            case 'b':
                bCnt++;
                break;
            case 'c':
                cCnt++;
                break;
            default:
                otherCnt++;
                break;
        }
    }
    cout<<"a: "<<aCnt<<" ";
    cout << "b: " << bCnt << " ";
    cout << "c: " << cCnt << " ";
    cout << "other: " << otherCnt << " ";
    return 0; 
}
