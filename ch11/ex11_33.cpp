#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
#include <stack>

#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <numeric>
using namespace std;

/**
 翻译
 */

map<string, string> buildMap(ifstream &mapFile) {
    map<string, string> word_map;
    for (string name, line; mapFile >> name, getline(mapFile, line);) {
        word_map[name] = line;
    }
    return word_map;
}

string myTransform(const map<string, string> &word_map, const string &word) {
    auto it = word_map.find(word);
    if (it != word_map.end()) {
        return it->second;
    } else {
        return word;
    }
}

void word_transformation(ifstream &mapFile, ifstream &inputFile) {
    map<string, string> word_map = buildMap(mapFile);
    for (string line; getline(inputFile, line);) {
        istringstream iss(line);
        string res = "";
        for (string word; iss >> word;) {
            res += myTransform(word_map, word);
            res += " ";
        }
        cout << res << endl;
    }
}

int main() {
    const char *path = "../data/word_transformation.txt";
    const char *path2 = "../data/given_to_transform.txt";
    ifstream in(path), in2(path2);
    if (!in) {
        cerr << "Failed to open file: " << path << endl;
        return 1;
    }
    if (!in2) {
        cerr << "Failed to open file: " << path2 << endl;
        return 1;
    }

    word_transformation(in, in2);
   
    return 0;
}