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

class StrVec {
  public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
    StrVec(initializer_list<string> il);
    StrVec(const StrVec &);
    StrVec &operator=(const StrVec &);
    ~StrVec();

  public:
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    string *begin() const { return elements; }
    string *end() const { return first_free; }
    void push_back(const string &);
    void range_initialize(const string *, const string *);

  private:
    string *elements;
    string *first_free;
    string *cap;
    allocator<string> alloc;

    pair<string *, string *> alloc_n_copy(const string *begin,
                                          const string *end);
    void free();
    void chk_n_alloc();
    void reallocate();
    void alloc_n_move(size_t new_cap);

  public:
    void reserve(size_t new_cap);
    void resize(size_t count);
    void resize(size_t cout, const string &);
    string &at(size_t pos) { return *(elements + pos); }
    const string &at(size_t pos) const { return *(elements + pos); }

  public:
    StrVec(StrVec &&) noexcept;
    StrVec &operator=(StrVec &&) noexcept;
};

StrVec::StrVec(initializer_list<string> il) {
    range_initialize(il.begin(), il.end());
}

void StrVec::push_back(const string &str) {
    // 判断空间, 需要增加chk_n_alloc函数
    chk_n_alloc();
    *first_free++ = str;
}

void StrVec::chk_n_alloc() {
    if (first_free == cap) {
        // 需要增加reallocate
        reallocate();
    }
}

void StrVec::reallocate() {
    auto newCap = size() ? size() * 2 : 1;
    auto newdata = alloc.allocate(newCap);
    string *res = uninitialized_copy(elements, first_free, newdata);
    free();
    elements = newdata;
    first_free = res;
    cap = elements + newCap;
}

pair<string *, string *> StrVec::alloc_n_copy(const string *begin,
                                              const string *end) {
    auto rawdata = alloc.allocate(end - begin);
    auto res = uninitialized_copy(begin, end, rawdata);
    return {rawdata, res};
}

void StrVec::free() {
    if (elements) {
        for_each(elements, first_free,
                 [this](string &ele) { alloc.destroy(&ele); });
        alloc.deallocate(elements, size());
    }
}
StrVec::StrVec(const StrVec &rhs) {
    range_initialize(rhs.elements, rhs.first_free);
}

StrVec &StrVec::operator=(const StrVec &rhs) {
    auto res = alloc_n_copy(rhs.elements, rhs.first_free);
    free();
    elements = res.first;
    first_free = cap = res.second;
    return *this;
}
void StrVec::range_initialize(const string *beg, const string *end) {
    auto res = alloc_n_copy(beg, end);
    elements = res.first;
    first_free = cap = res.second;
}

void StrVec::alloc_n_move(size_t newCap) {
    auto newdata = alloc.allocate(newCap);
    string *res = uninitialized_copy(elements, first_free, newdata);
    free();
    elements = newdata;
    first_free = res;
    cap = elements + newCap;
}

// 抽取共通后
void StrVec::reallocate() {
    auto newCap = size() ? size() * 2 : 1;
    alloc_n_move(newCap);
}
void StrVec::reserve(size_t new_cap) {
    if (new_cap > capacity()) {
        alloc_n_move(new_cap);
    }
}
void StrVec::resize(size_t count, const string &str) {
    if (count > size()) {
        if (count > capacity())
            reserve(count * 2);
        while (first_free != elements + count) {
            alloc.construct(first_free++, str);
        }
    } else if (count < size()) {
        while (first_free != elements + count) {
            // alloc.destroy(first_free--); // 这里错了
            alloc.destroy(--first_free);
        }
    }
}

void StrVec::resize(size_t count) { resize(count, string()); }

StrVec::StrVec(StrVec &&s) noexcept
    : elements(s.elements), first_free(s.first_free), cap(s.cap) {
    s.elements = s.first_free = s.cap =
        nullptr; // 右值对象处于一个可以被销毁的状态
}

// 修改为
StrVec &StrVec::operator=(StrVec &&s) noexcept {
    if (this != &s) {
        free();
        elements = s.elements;
        first_free = s.first_free;
        cap = s.cap;
        s.elements = s.first_free = s.cap = nullptr;
    }
}

StrVec::~StrVec() { free(); }