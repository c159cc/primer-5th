
#include "Chapter6.h"
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace std;
/*
>  Write and test your version of fact.
 */
#include <iostream>

int fact(int n) {
    int i = n, res = 1;
    while (i > 0) {
        res *= i--;
    }
    return res;
}
