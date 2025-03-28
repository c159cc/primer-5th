#ifndef ex7_4_h
#define ex7_4_h
#include <string> 
#include <iostream> 
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
};

 
#endif