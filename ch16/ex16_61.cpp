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
#include <memory>
#include <numeric>
#include <set>
using namespace std;
/**
> Write the emplace_back function for your StrVec class and for the Vec class
that you wrote for the exercises in 16.1.2.

 */

/**
 *  @brief a vector like class
 */

namespace ch16{
    template<typename T, typename ...Args>
    auto make_shared(Args&&... args)->std::shared_ptr<T>{
        retrun std::shared_ptr<T>(new T(std::forward<Args>(args)...));
    }
}