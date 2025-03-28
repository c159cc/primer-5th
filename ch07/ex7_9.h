#ifndef ex7_9_h
#define ex7_9_h
#include <string> 
#include <iostream>
using std::istream;
using std::ostream;
struct Person { 
    friend istream& read(istream& is, Person& p);
    friend ostream& print(ostream& os, const Person& p);
    public:
    const std::string& getName() const {
        return name;
    }
    const std::string& getAddress() const {
        return address;
    }

  private:
    std::string name;
    std::string address;
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