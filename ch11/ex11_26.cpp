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
#include <cctype>
#include <functional>
#include <map>
#include <numeric>
using namespace std;

/**
> What type can be used to subscript a map? What type does the subscript
operator return ? Give a concrete example - that is , define a map and then
write the types that can be used to subscript the map and the type that would be
returned from the subscript operator. value_type key_type
 */

int main() {
    map<int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}};
    using keyType = map<int, string>::key_type;
    using valueType = map<int, string>::mapped_type;

    cout<<"keyType: "<<typeid(keyType).name()<<endl;
    cout<<"valueType: "<<typeid(m[1]).name()<<endl;

    return 0;
}