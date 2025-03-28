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
> Define a map for which the key is the family's last name and the value is a
vector of the children's names. Write code to add new families and to add new
children to an existing family.

 */

int main() {
    map<string, vector<string>> family_children;

    // add a new family
    family_children["Smith"] = {"Alice", "Bob"};

    // add a new child to an existing family
    family_children["Smith"].push_back("Charlie");

    auto vec2Str = [](const vector<string> &vec) { 
        return accumulate(vec.begin(), vec.end(), string());
    };
    for (const auto &[key, val] : family_children)
        cout << key << " -> " << vec2Str(val) << endl;

    return 0;
}