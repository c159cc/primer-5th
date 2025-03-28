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

class String {
  public:
    String() : elements(nullptr), end(nullptr) {};
    String(const char *s);
    ~String();
    String(const String &s);
    String &operator=(const String &s);
    String(String &&s) noexcept;
    String &operator=(String &&s) noexcept;

  public:
    pair<char *, char *> alloc_n_copy(const char *b, const char *e);
    void free();
    unique_ptr<String> clone();

  private:
    char *elements;
    char *end;
    allocator<char> alloc;
    void range_initializer(const char *bg, const char *ed);
};

String::String(String &&s) noexcept : elements(s.elements), end(s.end) {
    cout<<"move constructor"<<endl;
    s.elements = s.end = nullptr;
}
String &String::operator=(String &&s) noexcept {
    cout<<"move assignment"<<endl;
    if (this != &s) {
        free();
        elements = s.elements;
        end = s.end;
        s.elements = s.end = nullptr;
    }
    return *this;
}

void String::range_initializer(const char *bg, const char *ed) {
    auto newData = alloc_n_copy(bg, ed);
    elements = newData.first;
    end = newData.second;
}

String::String(const char *cr) {
    const char *ends = cr;
    while (*ends != '\0') {
        ++ends;
    }
    range_initializer(cr, ends);
}

pair<char *, char *> String::alloc_n_copy(const char *b, const char *e) {

    // cout << "allocate " << (e - b) << " elements" << endl;
    auto newData = alloc.allocate(e - b);
    auto last = uninitialized_copy(b, e, newData);
    return {newData, last};
}

void String::free() {
    if (elements) {
        for_each(elements, end, [this](char &c) { alloc.destroy(&c); });
        // cout << "fre " << (end - elements) << " elements" << endl;
        alloc.deallocate(elements, end - elements);
    }
}

String::String(const String &rhs) {
    cout << "copy constructor" << endl;
    range_initializer(rhs.elements, rhs.end);
}

String &String::operator=(const String &rhs) {
    cout << "operator=" << endl;
    auto newData = alloc_n_copy(rhs.elements, rhs.end);
    free();
    elements = newData.first;
    end = newData.second;
    return *this;
}

String::~String() { free(); }

unique_ptr<String> String::clone() {
    unique_ptr<String> p(new String());
    return p;
}

 

int main() {

    String s1("hello");
    auto u = s1.clone();

    return 0;
}