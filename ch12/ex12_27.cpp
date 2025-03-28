#include "ex12_22.h"
using namespace std;

/**
> The TextQuery and QueryResult classes use only capabilities that we have
already covered. Without looking ahead, write your own versions of these
classes.

 */

class QueryResult;
class TextQuery {
  public:
    TextQuery(ifstream &infile);

  public:
    QueryResult query(const string &s) const;
};

class QueryResult {};

ostream &print(ostream &os, const QueryResult &qr) {}

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

int main() { return 0; }