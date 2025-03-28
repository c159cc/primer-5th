
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
> Using Table 4.12 explain what the following expression does:

someValue ? ++x, ++y: --x, --y;
 */
int main() {

    int i;
    double d;
    const string &ps = "Hello, world!";
    char *pc;
    void *pv;

    pv = &d;
    pc = static_cast<char*>(pv);
    return 0;
}
