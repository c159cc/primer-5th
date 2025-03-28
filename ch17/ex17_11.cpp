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
#include <set>
using namespace std;
/**
> Define a data structure that contains an integral object to track responses to
a true/false quiz containing 10 questions. what changes, if any, would you need
to make in your data structure if the quiz had 100 questions?

.
 */

#ifndef QUIZ
#define QUIZ
#include <bitset>
#include <iostream>
#include <string>
#include <utility>

// class Quiz
template <std::size_t N> class Quiz {
  public:
    // constructors
    Quiz() = default;
    Quiz(std::string &s) : bitquiz(s) {}

    // generate grade
    template <std::size_t M>
    friend std::size_t grade(Quiz<M> const &, Quiz<M> const &);

    // print
    template <std::size_t M>
    friend std::ostream &operator<<(std::ostream &, Quiz<M> const &);

    // update bitset
    void update(std::pair<std::size_t, bool>);
 
  private:
    std::bitset<N> bitquiz;
};
#endif

template <std::size_t N>
void Quiz<N>::update(std::pair<std::size_t, bool> pair) {
    bitquiz.set(pair.first, pair.second);
}

template <std::size_t M>
std::ostream &operator<<(std::ostream &os, Quiz<M> const &quiz) {
    os << quiz.bitquiz;
    return os;
}

template <std::size_t M>
std::size_t grade(Quiz<M> const &corAns, Quiz<M> const &stuAns) {
    auto result = stuAns.bitquiz ^ corAns.bitquiz;
    result.flip();
    return result.count();
}
