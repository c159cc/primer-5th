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

#include <algorithm>
#include <bitset>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <random>
#include <regex>
#include <set>
#include<iomanip>
using namespace std;
/**
.
 */

int main() { 
    int i = -16;
    double d = 3.14159;
    cout <<   " ------------- default -------------" << endl;
    cout << "i:" << setw(12) << i << "next col" << endl;
    cout << "d:" << setw(12) << d << "next col" << endl;

    cout << left << " ------------- left -------------" << endl;
    cout << "i:" << setw(12) << i << "next col" << endl;
    cout << "d:" << setw(12) << d << "next col" << endl;

    cout << right << " ------------- right -------------" << endl;
    cout << "i:" << setw(12) << i << "next col" << endl;
    cout << "d:" << setw(12) << d << "next col" << endl;

    cout << internal << " ------------- internal -------------" << endl;
    cout << "i:" << setw(12) << i << "next col" << endl;
    cout << "d:" << setw(12) << d << "next col" << endl;


    return 0;
}