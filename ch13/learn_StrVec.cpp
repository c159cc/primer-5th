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

/**
 * 从无到有实现一个类的思路
 *
 * 从需求开始, 一个只能存放string的vector
 * 第一步: 构造,析构,拷贝的逻辑
 *
 */
class StrVec {
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
    ~StrVec() {
        // 销毁元素, 释放内存
    }
    StrVec(const StrVec &s);
    StrVec &operator=(const StrVec &s);
    size_t size() const { return first_free - elements; }
    pair<string *, string *> StrVec::range_initialize(const string *first, const string *last);
    string *begin() const { return elements; }
    string *end() const { return first_free; }
    
    private:
      void free();

    private:
      string *elements;
      string *first_free;
      string *cap;
      allocator<string> alloc;

    
};

void StrVec::free() {
    if (elements) {
        for (auto p = first_free; p != elements;) {
            alloc.destroy(--p);
        }
        alloc.deallocate(elements, cap - elements);
    }
}

StrVec::~StrVec() { free(); };

pair<string*, string*> StrVec::range_initialize(const string *first, const string *last) { 
    auto newdata = alloc.allocate(last - first);
    auto dest = newdata;
    auto elem =  elements;
    while (elem != first_free) {
        alloc.construct(dest++, *elem++);
    }
}

StrVec::StrVec(const StrVec &s) {
    // 这里得到需要size方法
    pair<string*, string*> newdata = range_initialize(s.begin(), s.end());
    elements = newdata.first;
    first_free = newdata.second, cap = newdata.second;
}

StrVec &StrVec::operator=(const StrVec &s) {
   if(&s == this) return *this;
   auto newdata = alloc.allocate(s.size());
   auto dest = newdata;
   auto elem = s.elements;
   for (size_t i = 0; i != s.size(); ++i) {
       alloc.construct(dest++, *elem++);
   }

   // 数据拷贝过去之后, 需要释放原来的内存
   free();
   elements = newdata;
   first_free = dest, cap = dest;
   return *this;
}
 