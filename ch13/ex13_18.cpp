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
#include <memory>
#include <numeric>
#include <set>
using namespace std;

/**
> Define an Employee class that contains an employee name and a unique employee
identifier. Give the class a default constructor and a constructor that takes a
string representing the employee's name. Each constructor should generate a
unique ID by incrementing a static data member.

 */
class Employee {
  public:
    Employee() : id(++unique) {}
    Employee(const string &name) : name(name), id(++unique) {}
    Employee &operator=(const Employee &);

  private:
    int id;
    string name;
    static int unique;
};

int Employee::unique = 10;
Employee &Employee::operator=(const Employee &other) {
    if (this != &other) {
        id = ++unique;
        name = other.name;
    }
    return *this;
}

int main() {}