#ifndef ex7_9_h
#define ex7_9_h
#include <string> 
#include <iostream>
using std::istream;
using std::ostream;

struct Person;
istream& read(istream& is, Person& p); 

struct Person { 
    std::string name;
    std::string address;
    public:
    const std::string& getName() const {
        return name;
    }
    const std::string& getAddress() const {
        return address;
    }

    Person() = default;
    Person(const std::string &n, const std::string &a) : name(n), address(a) {};
    Person(istream &is) { read(is, *this); }
};

istream& read(istream& is, Person& p) {
    is >> p.name >> p.address;
    return is;
}

ostream& print(ostream& os, const Person& p) {
    os << p.name << " " << p.address;
    return os;
}

#endif