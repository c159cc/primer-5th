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

#include "ex13_30_HasPtr.h"
#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;

class StrVec {
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
    StrVec(initializer_list<string> il);
    StrVec(const StrVec &);
    StrVec &operator=(const StrVec &);
    ~StrVec();
    void push_back(const string &s);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    string *begin() const { return elements; }
    string *end() const { return first_free; }
    void reserve(size_t new_cap);
    void resize(size_t new_size);
    void resize(size_t new_size, const string &s);
    void StrVec::alloc_n_move(size_t new_cap);
    void StrVec::range_initialize(const string *first, const string *last);

  private:
    allocator<string> alloc;
    void chk_n_alloc() {
        if (size() == capacity()) {
            reallocate();
        }
    };
    pair<string *, string *> alloc_n_copy(const string *, const string *);
    void reallocate();
    void free();

  private:
    string *elements;
    string *first_free;
    string *cap;
};

void StrVec::push_back(const string &s) {
    chk_n_alloc();
    alloc.construct(first_free++, s);
};

pair<string *, string *> StrVec::alloc_n_copy(const string *b,
                                              const string *e) {
    auto data = alloc.allocate(e - b);
    return {data, uninitialized_copy(b, e, data)};
};

void StrVec::free() {
    if (elements) {
        for (auto p = first_free; p != elements;) {
            alloc.destroy(--p);
        }
        alloc.deallocate(elements, cap - elements);
    }
};

void StrVec::range_initialize(const string *first, const string *last) {
    auto newdata = alloc_n_copy(first, last);
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::StrVec(const StrVec &s) { range_initialize(s.begin(), s.end()); }

StrVec::~StrVec() { free(); }

StrVec &StrVec::operator=(const StrVec &rhs) {
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

void StrVec::alloc_n_move(size_t new_cap) {
    auto newdata = alloc.allocate(new_cap);
    auto dest = newdata;
    auto elem = elements;
    for (size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, std::move(*elem++));
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + new_cap;
}

void StrVec::reallocate() {
    auto newcapacity = size() ? 2 * size() : 1;
    alloc_n_move(newcapacity);
}

void StrVec::reserve(size_t new_cap) {
    if (new_cap > capacity()) {
        alloc_n_move(new_cap);
    }
}

void StrVec::resize(size_t new_size) { resize(new_size, string()); }

void StrVec::resize(size_t new_size, const string &s) {
    if (new_size > capacity()) {
        reserve(new_size);
    }
    if (new_size > size()) {
        for (auto p = first_free; p != elements + new_size; p++) {
            alloc.construct(p, s);
        }
    } else if (new_size < size()) {
        while (first_free != elements + new_size) {
            alloc.destroy(--first_free);
        }
    }
}

StrVec::StrVec(initializer_list<string> il) {
    range_initialize(il.begin(), il.end()); 
}