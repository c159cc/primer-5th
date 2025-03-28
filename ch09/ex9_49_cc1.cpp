#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
using namespace std;

/**
> A letter has an ascender if, as with d or f, part of the letter extends above
the middle of the line. A letter has a descender if , as with p or g, part of
the letter extends below the line. Write a program that reads a file containing
words and reports the longest word that contains neither ascenders nor
descenders.

1. 打开文件失败, 返回-1
2. find_first_not_of
 */

int main() {
    string valid = "acemonrsuvwxyz";
    ifstream file("../data/letter.txt");
    if (!file) {
        cout << "open file failed" << endl;
        return -1;
    }

    // 这里lambda做到了什么呢? 从所有候选者中找最大值
    string max_word;
    auto find_max = [&max_word, &valid](const string &word) {
        if (word.find_first_not_of(valid) == string::npos &&
            word.length() > max_word.length()) {
            max_word = word;
        }
    };

    for (string word; file >> word; find_max(word))
        ;

    cout << "word: " << max_word << endl;
    return 0;
}