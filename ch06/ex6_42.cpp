
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Give the second parameter of make_plural(6.3.2) a default argument of 's'.
Test  your program by printing singular and plural versions of the words success
and failure.
 */
#include <iostream>
 
 string make_plural(size_t ctr, const string& word, const string& ending = "s"){
    return ctr>1? word+ending : word;
 }

int main() {

    cout << make_plural(1, "success") << endl; // prints "success"
    cout << make_plural(2, "success") << endl; // prints "successes"
    cout << make_plural(1, "failure") << endl; // prints "failure"
    cout << make_plural(2, "failure") << endl; // prints "failures"

    return 0;
}