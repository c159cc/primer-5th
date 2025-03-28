#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
> Write your own version of the Account class.
cc: 为什么不直接赋值interestRate = 42.42呢？
为了支持复杂逻辑, todayRate可能从一个配置文件读取
 */

class Account {
  public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double newRate) { interestRate = newRate; }

  private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 42.42;
    static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();