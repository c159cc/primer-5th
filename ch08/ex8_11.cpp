#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/**
> The program in this section defined its istringstream object inside the outer
while loop. What changes would you need to make if record were defined outside
that loop? Rewrite the program , moving the definition of record outside the
while, and see whether you thought of all the changes that are needed.

 */

struct PersonInfo {
    string name;
    vector<string> phones;
    void print() const{
        cout << name << ": ";
        for (const auto& phone : phones)
            cout << phone << " ";
        cout << endl;
    }
};

int main(){
    string line, word;
    ifstream file("../data/phonenumbers.txt");
    vector<PersonInfo> people;
    istringstream record;
    while (getline(file, line)) {
        PersonInfo info;
        record.clear(); // 为什么要clear?
        record.str(line);
        record >> info.name;
        while (record >> word) 
            info.phones.push_back(word);
        people.push_back(info);
    }

    for (const auto& person : people)
        person.print();

    return 0;
}

 