#include "../ch12/ex12_22.h"
using namespace std;

/**
> The TextQuery and QueryResult classes use only capabilities that we have
already covered. Without looking ahead, write your own versions of these
classes.

 */

class QueryResult;
class TextQuery {
  public:
    using line_no = StrBlob::size_type;
    TextQuery(ifstream &infile);

  public:
    QueryResult query(const string &s) const;

  private:
    shared_ptr<StrBlob> file;
    map<string, shared_ptr<set<line_no>>> wm;
};

TextQuery::TextQuery(ifstream &infile) : file(new StrBlob) {
    string line;
    while (getline(infile, line)) {
        file->push_back(line);
        int n = file->size() - 1;
        istringstream iss(line);
        string word;
        while (iss >> word) {
            auto &lines = wm[word];
            if (!lines)
                lines.reset(new set<line_no>);
            lines->insert(n);
        }
    }
}

class QueryResult {
    friend ostream &print(ostream &os, const QueryResult &qr);

  public:
    QueryResult(string s, shared_ptr<set<TextQuery::line_no>> lines,
                shared_ptr<StrBlob> file)
        : sought(s), lines(lines), file(file) {}

  private:
    string sought;
    shared_ptr<set<TextQuery::line_no>> lines;
    shared_ptr<StrBlob> file;
};
QueryResult TextQuery::query(const string &s) const {
    static shared_ptr<set<line_no>> empty(new set<line_no>);
    auto loc = wm.find(s);
    if (loc == wm.end())
        return QueryResult(s, empty, file);

    return QueryResult(s, loc->second, file);
}
ostream &print(ostream &os, const QueryResult &qr) {
    os << qr.sought << " occurs " << qr.lines->size() << " "
       << "times" << endl;
    for (auto num : *qr.lines) {
        auto ptr = StrBlobPtr((*qr.file), num); 
        os << "\t(line " << num + 1 << ")" << ptr.deref() << endl;
    }

    return os;
}

void runQueries(ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        cout << "Enter a word to look for, or q to quit: ";
        string word;
        if (!(cin >> word) || word == "q")
            break;

        print(cout, tq.query(word)) << endl;
    }
}
 