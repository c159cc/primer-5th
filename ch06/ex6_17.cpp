
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
/*
> Write a function to determine whether a string contains any capital letters.
Write a function to change a string to all lowercase. Do the parameters you used
in these functions have the same type? If so, why?If not, why not?
 */
#include <iostream>

bool hasCapital(const string& s){
    for(auto c:s)
        if(isupper(c))
            return true;
    return false;
}


void toLowerCase(string& s){
    for(auto& c:s)
        c = tolower(c);
}
int main() {
    string s1 = "Hello World";
    string s2 = "hello world";
    
    cout<<s1<< " has capital letters: "<<hasCapital(s1)<<endl;
    cout<<s2<< " has capital letters: "<<hasCapital(s2)<<endl;
    
    toLowerCase(s1);
    cout<<s1<< " to lowercase: "<<s1<<endl;
     

    return 0;
}