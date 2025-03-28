
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

    string word, cur, max_word;
    size_t count = 1;
    size_t max_count = 0;
    if (!(cin >> cur)) {
        return -1;
    }
    max_word = cur;
    word = cur;
    max_count = count;

    while(cin >> cur){
        if(cur==word){
            ++count;
        }else{ 
            if(count>max_count){
                max_word = word;
                max_count = count;
            }
            count = 1;
            word = cur;
        }
    }

    if (count > max_count) {
        max_word = word;
        max_count = count;
    }
    cout << "The maximum number of vowels in a word is: " << max_word<< " max="<< max_count << endl;    
    return 0;
}
