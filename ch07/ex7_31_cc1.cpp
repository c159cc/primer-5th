#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include "learn_Screen.h"
using namespace std;
using namespace std;
/**
> Define a pair of classes X and Y, in which X has a pointer to Y, and Y has an
object of type X.

内置类型要初始化
 */

struct Y;
struct X{
    Y* y_ptr=nullptr;
};

struct Y{
    X x_obj;
};

int main(){
 
    
}