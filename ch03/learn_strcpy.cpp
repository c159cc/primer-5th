#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char ca1[] = "Hello";

    char ca2[100];
    strcpy(ca2, ca1);

    cout << ca2 << endl;
    cout<<"ca2 len="<<strlen(ca2)<<endl; // 5
    strcat(ca2, " ");

    cout << "after add space ca2len=" << strlen(ca2) << endl; // 6
    return 0;
}