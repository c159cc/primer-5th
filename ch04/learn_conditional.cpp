
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{

    const char *cp = "\0hello";
    if(cp&&*cp){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    return 0;
}
