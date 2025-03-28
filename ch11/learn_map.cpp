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

int main() {
    const char *path = "../data/word_transformation.txt";
    const char *path2 = "../data/given_to_transform.txt";
    ifstream in(path);
    if (!in) {
        cerr << "Failed to open file: " << path << endl;
        return 1;
    }

    map<string, string> word_map;
    for (string name, line; in >> name, getline(in, line);) {
        word_map[name] = line;
    }

    in.close();
    in.open(path2);
    if (!in) {
        cerr << "Failed to open file: " << path2 << endl;
        return 1;
    }

    for (string line; getline(in, line);) {
        istringstream iss(line);
        string word;
        string res = "";
        while (iss >> word) {
            auto it = word_map.find(word);
            if (it != word_map.end()) {
                res += it->second + " ";
            } else {
                res += word + " ";
            }
        }
        cout << res << endl;
    }

    return 0;
}