#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
What does the following program do?
 */
 

int main()
{

    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp)
    {
        cout << *cp << endl;
        ++cp;
    }

    return 0;
}
