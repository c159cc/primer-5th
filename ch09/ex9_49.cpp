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
 */

int main() {
    string ascender = "bdf", descender = "gjpqy";
    ifstream file("../data/letter.txt");
    string word;
    int max_len = 0;
    string max_word;
    while (file >> word) {
        if (word.find_first_of(ascender) == string::npos &&
            word.find_first_of(descender) == string::npos &&
            word.length() > max_len) {
            max_len = word.length();
            max_word = word;
        }
    }

    cout << "word: " << max_word << endl;
    cout << "length: " << max_len << endl;
    return 0;
}