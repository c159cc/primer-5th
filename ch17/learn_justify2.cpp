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
每次都需要setw(12), 
 */

int main() { 
    int i = -16;
    double d = 3.14159;
    cout <<   " ------------- default -------------" << endl;
    cout << "i:"  << i << "next col" << endl;
    cout << "d:"  << d << "next col" << endl;

    cout << left << " ------------- left -------------" << endl;
    cout << "i:"  << i << "next col" << endl;
    cout << "d:"  << d << "next col" << endl;

    cout << right << " ------------- right -------------" << endl;
    cout << "i:"  << i << "next col" << endl;
    cout << "d:"  << d << "next col" << endl;

    cout << internal << " ------------- internal -------------" << endl;
    cout << "i:"  << i << "next col" << endl;
    cout << "d:"  << d << "next col" << endl;


    return 0;
}