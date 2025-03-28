
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

// cc: 
// 1. pair 是一个绑定关系, 
// 2. 数量统计可以放在每个循环中
// 3. 不用事先录入一个单词
int main() {

    pair<string, int> max_duplicated;

    int count = 0;
    for (string prestr, str; cin >> str; prestr = str) {
        if (str == prestr)
            ++count;
        else
            count = 0;
        if (count > max_duplicated.second)
            max_duplicated = {str, count};
    }

    if (max_duplicated.first.empty())
        cout << "No duplicated words found." << endl;
    else
        cout << "The most duplicated word is " << max_duplicated.first
             << " with " << max_duplicated.second+1 << " duplicates." << endl;
    return 0;
}
