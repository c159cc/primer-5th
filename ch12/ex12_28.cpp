#include "ex12_22.h"
using namespace std;

/**
> Write a program to implement text queries without defining class to manage the
data. Your program should take a file and interact with a user to query for
words in that file. Use vector, map, and set containers to hold the data for the
file and to generate the results for the queries.


 */

ostream &query(ostream &os, const map<string, set<size_t>> &word_map,
               const vector<string> &lines, const string &word) {
    // 忽略大小写

    if (word_map.find(word) == word_map.end()) {
        os << "The word \"" << word << "\" is not in the file." << endl;
        return os;
    }
    auto &line_set = word_map.at(word);
    os << "The word occurs " << line_set.size() << "times" << endl;
    for (auto& line_num : line_set) {
        os << "\t:"<<lines[line_num - 1] << endl;
    }
    return os;
};
int main() {

    // 构造map和vector
    ifstream infile("..\\data\\letter2.txt");
    if (!infile) {
        cerr << "Cannot open file" << endl;
        return 1;
    }

    string line;
    size_t line_num = 0;
    vector<string> lines;
    map<string, set<size_t>> word_map;
    while (getline(infile, line)) {
        // 忽略空行
        ++line_num;
        lines.push_back(line);
        if (line.empty())
            continue;

        istringstream iss(line);
        string word;
        while (iss >> word) {
            // 忽略大小写
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            if (word_map.find(word) == word_map.end()) {
                word_map[word] = set<size_t>({line_num});
            } else {
                word_map[word].insert(line_num);
            }
        }
    }

    while (true) {
        cout << "Enter a word to look for, or q to quit: ";
        string word;
        if (!(cin >> word) || word == "q")
            break;
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        // 查询打印
        query(cout, word_map, lines, word) << endl;
    }

    return 0;
}