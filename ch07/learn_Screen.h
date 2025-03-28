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

  public:
    Screen &set(char);
    Screen &set(pos, pos, char);

  public:
    Screen &display(std::ostream &os) {
        do_display(os);
        return *this;
    }
    const Screen &display(std::ostream &os) const {
        do_display(os);
        return *this;
    }

  private:
    void do_display(std::ostream &os) const { os << contents; }
};

inline Screen &Screen::move(pos r, pos c){
    pos row = r*width; // 计算行的位置
    cursor = row+c; // 移动到这行的那一列
    return *this;
}

char Screen::get(pos r, pos c) const{
    pos row = r*width; // 计算行的位置
    return contents[row +c]; // 返回这个位置的字符
}

inline Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}
inline Screen &Screen::set(pos r, pos col, char ch){
    contents[r*width+col] = ch;
    return *this; 
}

void Screen::some_member() const { ++access_ctr; }
#endif // EX7_23_H