#ifndef EX7_23_H
#define EX7_23_H
#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
> Write a version of the transaction-processing program from 1.6 using the
Sales_data class you defined for the exercises in 2.6.1.
 */
class Screen {
  public:
    typedef std::string::size_type pos;
    Screen() = default; // 需要, 因为有另一个构造存在
    Screen(pos ht, pos wd, char c)
        : height(ht), width(wd), contents(ht * wd, c) {};
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd,' ') {}
 
    char get() const { return contents[cursor]; } // 隐式inline
    inline char get(pos ht, pos wd) const;        // 显示 inline
    Screen &move(pos r, pos c);



  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

  public:
    void some_member() const;

  private:
    mutable size_t access_ctr; // 在一个const对象内都可以修改
};

void Screen::some_member() const { ++access_ctr; }
#endif // EX7_23_H