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

#include "ex17_4_Salesdata.h"
#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;
/**
> Write and test your own version of the findBook function.
.
 */

typedef tuple<vector<Sales_data>::size_type, vector<Sales_data>::const_iterator,
              vector<Sales_data>::const_iterator>
    matches;

vector<matches> findBook(const string &bookNo,
                         const vector<vector<Sales_data>> &files) {
    vector<matches> result;
    for (const auto &file : files) {
        auto it = equal_range(file.cbegin(), file.cend(), bookNo, compareIsbn);
        if (it.first == it.second)
            continue;

        result.emplace_back(distance(file.cbegin(), it.first), it.first,
                            it.second);
    }

    return result;
}

    int main() {
        vector<vector<Sales_data>> files;
        vector<Sales_data> file1 = {{"0-201-78345-X", 10, 25.99},
                                   {"0-201-78345-X", 5, 39.99},
                                   {"0-201-78345-X", 2, 19.99}};
        vector<Sales_data> file2 = {{"0-201-88345-X", 3, 19.99},
                                   {"0-201-88345-X", 2, 29.99},
                                   {"0-201-88345-X", 1, 9.99}};
        files.push_back(file1);
        files.push_back(file2);

 


        return 0;
    }