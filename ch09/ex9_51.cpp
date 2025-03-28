#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
using namespace std;

/**
> Write a class that has three unsigned members representing year, month, and
day. Write a constructor that takes a string representing a date. Your
constructor should handle a variety of date formats, such as January 1,1900,
1/1/1900, Jan 1, 1900, and so on.

 */

class MyDate {
    unsigned year, month, day;

  public:
    MyDate(const string &date_str) {
        // parse the date string
        //...
        unsigned format = 0x02;
        if (date_str.find('/') != string::npos) {
            format = 0x01;
        }

        switch (format) {
        case 0x01: // 1/1/1900
            day = stoi(date_str.substr(0, date_str.find('/')));
            month = stoi(date_str.substr(date_str.find('/') + 1,
                                         date_str.find_last_of('/') -
                                             date_str.find('/')));
            year = stoi(date_str.substr(date_str.find_last_of('/') + 1));
            break;
        case 0x02: // January 1,1900

            break;
        default:
            break;
        }
    }
};

int main() { return 0; }