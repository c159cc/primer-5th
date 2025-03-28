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

#include "./ex15_34_TextQuery.h"
/**
> For the expression built in Figure 15.3:
> (a) List the constructors executed in processing that expression.
> (b) List the calls to rep that are made from cout<<q.
> (c) List the calls to eval made from q.eval().
 */
class TextQuery;
class Query_base {
    friend class Query;

  protected:
    using line_no = TextQuery::line_no;
    virtual ~Query_base() = default;

  private:
    virtual QueryResult eval(const TextQuery &) const = 0;
    virtual string rep() const = 0;
};

class Query {
    friend Query operator~(const Query &);
    friend Query operator|(const Query &, const Query &);
    friend Query operator&(const Query &, const Query &);

  public:
    Query(const string &);
    QueryResult eval(const TextQuery &t) const { return q->eval(t); }
    string rep() const { return q->rep(); }

  private:
    Query(shared_ptr<Query_base> query) : q(query) {}
    shared_ptr<Query_base> q;
};
ostream &operator<<(ostream &os, const Query &query) {
    return os << query.rep();
};

// ============= WordQuery =============
class WordQuery : public Query_base {
    friend class Query;
    WordQuery(const string &s) : query_word(s) {
        cout << "WordQuery constructor called" << endl;
    }
    QueryResult eval(const TextQuery &t) const { return t.query(query_word); }
    string rep() const { return query_word; }
    string query_word;
};

inline Query::Query(const string &s) : q(new WordQuery(s)) {
    cout << "Query constructor called" << endl;
};

// ============= NotQuery =============
class NotQuery : public Query_base {
    friend Query operator~(const Query &);
    NotQuery(const Query &q) : query(q) {
        cout << "NotQuery constructor called" << endl;
    }
    string rep() const { return "~(" + query.rep() + ")"; }
    QueryResult eval(const TextQuery &) const;
    Query query;
};

inline Query operator~(const Query &operand) {
    return shared_ptr<Query_base>(new NotQuery(operand));
}

// ============= BinaryQuery =============
class BinaryQuery : public Query_base {
  protected:
    BinaryQuery(const Query &l, const Query &r, string s)
        : lhs(l), rhs(r), opSym(s) {
        cout << "BinaryQuery constructor called" << endl;
    }
    string rep() const {
        return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")";
    }

    Query lhs, rhs; // 操作数
    string opSym;   // 操作符名字
};

// ============= AndQuery and OrQuery =============
class AndQuery : public BinaryQuery {
    friend Query operator&(const Query &, const Query &);
    AndQuery(const Query &left, const Query &right)
        : BinaryQuery(left, right, "&") {
        cout << "AndQuery constructor called" << endl;
    }
    QueryResult eval(const TextQuery &) const;
};
QueryResult AndQuery::eval(const TextQuery &t) const {    }

inline Query operator&(const Query &lhs, const Query &rhs) {
    return shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

class OrQuery : public BinaryQuery {
    friend Query operator|(const Query &, const Query &);
    OrQuery(const Query &left, const Query &right)
        : BinaryQuery(left, right, "|") {
        cout << "OrQuery constructor called" << endl;
    }
    QueryResult eval(const TextQuery &) const;
};

QueryResult OrQuery::eval(const TextQuery &t) const {    }

inline Query operator|(const Query &lhs, const Query &rhs) {
    return shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}

int main() {
    auto q = Query("a") & Query("b") | Query("c");
    return 0;
}