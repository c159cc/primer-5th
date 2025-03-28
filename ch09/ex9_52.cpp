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
using namespace std;

/**
> Use a stack to process parenthesized expressions. When you see an open
parenthesis, note that it was seen. When you see a close parenthesis after an
open parenthesis, pop elements down to and including the open parenthesis off
the stack. push a value onto the stack to indicate that a parenthesized
expression was replaced.
 */

int main() {
    string expr = "(a+b)*c";
    stack<char> s;
    for (char c : expr) {
        if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (s.top() != '(') { 
                s.pop();
            }
            s.pop();     // pop the '('
            s.push('#'); // replace the parenthesized expression with '*'
        } else {
            s.push(c);
        }
    }

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }   
    cout << endl;
    return 0;
}