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
using namespace std;

class StrBlobPtr;
class StrBlob {
    friend class StrBlobPtr;

  public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const string &t) { data->push_back(t); }
    void pop_back();
    string &front();
    string &back();
    string &front() const;
    string &back() const;

    StrBlobPtr begin();
    StrBlobPtr end();

  private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};

// 本身表示指向vector的指针, 所以递增返回本身, 还要能解引用
class StrBlobPtr {
  public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &s, size_t sz = 0) : wptr(s.data), curr(sz) {}
    // string &dref();
    // vector<string>::iterator incr();
    string &deref();    // 变量不允许修改值?
    StrBlobPtr &incr(); // 返回值为StrBlobPtr?

    bool operator!=(const StrBlobPtr &p) { return p.curr != curr; }

  private:
    shared_ptr<vector<string>> check(size_t i, const string &msg) const;
    size_t curr;
    weak_ptr<vector<string>> wptr;
};



StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il)
    : data(make_shared<vector<string>>(il)) {}
void StrBlob::check(size_type i, const string &msg) const {
    if (i >= data->size())
        throw out_of_range(msg);
}
string &StrBlob::front() {
    check(0, "front on empty StrBlob");
    return data->front();
}
string &StrBlob::front() const {
    check(0, "front on empty StrBlob");
    return data->front();
}
string &StrBlob::back() {
    check(0, "back on empty StrBlob");
    return data->back();
}
string &StrBlob::back() const {
    check(0, "back on empty StrBlob");
    return data->back();
}
void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}


shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const{
    auto p = wptr.lock();
    if (!p)
        throw runtime_error("dereference null StrBlobPtr");
    if (i >= p->size())
        throw out_of_range(msg);
    return p;
}

string &StrBlobPtr::deref() {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr &StrBlobPtr::incr() {
    auto p = check(curr, "increment past end of StrBlob");
    ++curr;
    return *this;
}
StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end() { return StrBlobPtr(*this, data->size()); }