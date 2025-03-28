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
class HasPtr {
    friend bool operator<(const HasPtr &, const HasPtr &);

  public:
    HasPtr() : ps(new string()), i(0) {}
    ~HasPtr() { delete ps; }
    HasPtr(const string &s) : ps(new string(s)), i(0) {
        cout << "HasPtr(const string &s)" << endl;
    }
    HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i) {}
    HasPtr &operator=(HasPtr &hp);
    HasPtr &operator=(HasPtr &&hp);

  public:
    void swap(HasPtr &rhs) {
        using std::swap;
        swap(ps, rhs.ps);
        swap(i, rhs.i);
        cout << "swap " << *ps << " " << *rhs.ps << endl;
    }

    void show() const { cout << *ps << " "; }

  private:
    string *ps;
    int i;
};

// 解决自拷贝, 和new异常
HasPtr &HasPtr::operator=(HasPtr &hp) {
    this->swap(hp);
    return *this;
}

HasPtr &HasPtr::operator=(HasPtr &&hp) {
    this->swap(hp);
    return *this;
}

bool operator<(const HasPtr &lhs, const HasPtr &rhs) {
    return *lhs.ps < *rhs.ps;
}

int main() {
    vector<HasPtr> v;
    v.push_back(HasPtr("aaa"));
    v.push_back(HasPtr("bbb"));
    v.push_back(HasPtr("ddd"));
    v.push_back(HasPtr("ccc"));

    for (auto &hp : v)
        hp.show();
    cout << endl;

    sort(v.begin(), v.end());
    for (auto &hp : v)
        hp.show();
    cout << endl;
}