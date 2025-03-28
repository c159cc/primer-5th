## Exercise 7.1
> Write a version of the transaction-processing program from 1.6 using the Sales_data class you defined for the exercises in 2.6.1.

## Exercise 7.2
> Add the combine and isbn members to the Sales_data class you wrote for the exercises in 2.6.2.

## Exercise 7.3
> Revise your transaction-processing program from 7.1.1 to use these members.

## Exercise 7.4
> Write a class named Person that represents the name and address of a person. Use a string to hold each of these elements. Subsequent exercises will incrementally add features to this class.

## Exercise 7.5
> Provide operations in your Person class to return the name and address. Should these functions be const? Explain your choice.
cc: 应该是const, 因为不能通过get来修改
不仅是const 还是引用

## Exercise 7.6
> Define your own version of the add , read, and print functions.

## Exercise 7.7
> Rewrite the transaction-processing program you wrote for the exercises in 7.1.2 to use these new functions.

## Exercise 7.8
> Why does read define its Sales_data parameter as a plain reference and print define its parameter as a reference to const?

因为read会改变, print不会改变

## Exercise 7.9
> Add operations to read and print Person objects to the code you wrote for the exercises in 7.1.2.

## Exercise 7.10
> What does the condition in the following if statement do? if(read(read(cin, data1), data2))

cc: 先读取到data1, 然后读取到data2

## Exercise 7.11
> Add constructors to your Sales_data class and write a program to use each of the constructors.

## Exercise 7.12
> Move the definition of the Sales_data constructor that takes an istream into the body of the Sales_data class.
cc: read要提前声明

## Exercise 7.13
> Rewrite the program from page 255 to use the istream constructor.

## Exercise 7.14
> Write a version of the default constructor that explicitly initializes the members to the values we have provided as in-class initializers.
```c++ 
    Sales_data():bookNo(" "), units_sold(0), revenue(0.0) {};
```

## Exercise 7.15
> Add appropriate constructors to your Person class.

## Exercise 7.16
> What, if any, are the constraints on where and how often an access specifier may appear inside a class definition? What kinds of members should be defined after a public specifier? What kinds should be private?

cc: 数量没有限制, 接口定义在public后, 实现定义在private 后


## Exercise 7.17
> What, if any, are the differences between using class or struct?

cc: 只是默认的访问级别不同

## Exercise 7.18
> What is encapsulation? Why is it useful?

cc: 接口和内部实现分离
好处:
1, 用户代码不会不小心打断对象的状态
2, 修改实现不用修改用户代码

## Exercise 7.19
> Indicate which members of your Person class you would declare as public and which you would declare as private. Explain your choice.

## Exercise 7.20
> When are friends useful? Discuss the pros and cos of using friends.
优点: 可以访问私有成员
缺点: 破坏封装, 代码冗长

## Exercise 7.21
> Update your Sales_data class to hide its implementation. The programs you've written to use Sales_data operations should still continue to work. Recompile those programs with your new class definition to verify that they still work.

## Exercise 7.22
> Update your Person class to hide its implementation.

## Exercise 7.23
> Write your own version of the Screen class.

## Exercise 7.24
> Give your Screen class three constructors: a default constructor; a constructor that takes values for height and width and initializes the contents to hold the given number of blanks; and a constructor that takes values for height, width, and a character to use as the contents of the screen.

## Exercise 7.25
> Can Screen safely rely on the default versions of copy and assignment? If so, why? If not, why not?
cc: 可以

## Exercise 7.26
> Define Sales_data::avg_price as an inline function.

## Exercise 7.27
> Add the move, set, and display operations to your version of Screen. Test your class by executing the following code:
```c++ 
Screen myScreen(5,5,'X');
myScreen.move(4,0).set('#').display(cout);
cout<<"\n";
myScreen.display(cout);
cout<<"\n"
```

## Exercise 7.28
> What would happen in the previous exercise if the return type of move, set, and display was Screen rather than Screen&?
cc: 第二个输出不会打印`#`

## Exercise 7.29
> Revise your Screen class so that move, set, and display functions return Screen and check your prediction from the previous exercise.

## Exercise 7.30
> It is legal but redundant to refer to members through the this pointer . Discuss the pros and cons of explicitly using the this pointer to access members.
优点: 直观, 成员可以和形参相同的名字

## Exercise 7.31
> Define a pair of classes X and Y, in which X has a pointer to Y, and Y has an object of type X.

## Exercise 7.32
> Define your own versions of Screen and Window_mgr in which clear is a member of Window_mgr and a friend of Screen.

## Exercise 7.33
> What would happen if we gave Screen a size member defined as follows? Fix any problems you identify.
```c++ 
pos Screen::size() const {
  return height * width;
}
```
cc: 无法访问pos

## Exercise 7.34
> What would happen if we put the typedef of pos in the Screen class on page 285 as the last line in the class.
cc: 看不到pos


## Exercise 7.35
> Explain the following code, indicating which definition of Type of initVal is used for each use of those names. Say how you would fix any errors.
```c++ 
typedef string Type;
Type initVal(); // string
class Exercise{
  typedef double Type;
  Type setVal(Type); // double
  Type initVal(); // double
  private:
  int val;
};
// 第一个Type是string, 第二个Type是double
Type Exercise::setVal(Type parm){
  val = parm+initVal();
  return val;
}
```

## Exercise 7.36
> The following initializer is in error. Identify and fix the problem.
```c++ 
struct X{
  X(int i, int j):base(i), rem(base%j){}
  int rem, base;
}
```
cc: 
```c++ 
  X(int i, int j):base(i), rem(i%j){};
```
## Exercise 7.37
> Using the version of Sales_data from this section, determine which constructor is used to initialize each of the following variables and list the values of the data members in each object:

```c++ 
Sales_data first_item(cin);
int main(){
  Sales_data next;
  Sales_data last("9-999-99999-9");
};
```
cc: next的bookNo为空, last 的bookNo为"9-999-99999-9"

## Exercise 7.38
> We might want to supply cin as a default argument to the constructor that takes an istream&. Write the constructor declaration that uses cin as a default argument.

```c++ 
Sales_data(std::istream& is = std::cin);
```

## Exercise 7.39
> Would it be legal for both the constructor that takes a string and the one that takes an istream& to have default arguments? If not, why not?
cc: 不行, 不能存在两个默认构造

## Exercise 7.40
> Choose one of the following abstractions ( or an abstraction of your own choosing) . Determine what data are needed in the class. Provide an appropriate set of constructors . Explain your decisions.

```c++ 
(a) Book
(b) Date
(c) Employee
(d) Vehicle
(e) Object
(f) Tree
```
 
## Exercise 7.41
> Rewrite your own version of the Sales_data class to use delegating constructors. Add a statement to the body of each of the constructors that prints a message whenever it is executed. Write declarations to construct a Sales_Data objet in every way possible. Study the output until you are certain you understand the order of execution among delegating constructors.

## Exercise 7.42
> For the class you wrote for exercise 7.40 in 7.5.1 decide whether any of the constructors might use delegation. If so, write the delegating constructor(s) for your class. If not, look at the list of abstractions and choose one that you think would use a delegating constructor. Write the class definition for that abstraction.

## Exercise 7.43
> Assume we have a class named NoDefault that has a constructor that takes an int, but has no default constructor. Define a class C that has a member of type NoDefault. Define the default constructor for C.

## Exercise 7.44
> Is the following code legal? If not, why not?
```c++ 
vector<NoDefault> vec(10);
```
cc: 不合法, 缺少默认构造函数

## Exercise 7.45
> What if we defined the vector in the previous execercise to hold objects of type C?
cc: 没问题, 因为c有默认构造函数

## Exercise 7.46
> Which, if any, of the following statements are untrue? Why?
(a) A class must provide at least one constructor. // false, 编译器会合成
(b) A default constructor is a constructor with an empty parameter list. // 不全对, 有一个参数, 但是有默认值也算
(c) If there are no meaningful default values for a class, the class should not provide a default constructor. // 应该提供
(d) If a class does not define a default constructor, the compiler generates one that initializes each data member to the default value of its associated type. // false

cc: (d) 是错误的, 只有当没有显示提供任何构造器的情况才会合成默认构造器

## Exercise 7.47
> Explain whether the Sales_data constructor that takes a string should be explicit. What are the benefits of making the constructor explicit? What are the drawbacks?
cc: 优点缺点都是隐式转化, vector为什么要explicit? 因为不好区分是作为元素函数size

## Exercise 7.48
> Assuming the Sales_data constructors are not explicit, what operations happen during the following definitions?
```c++ 
string null_isbn("9-999-99999-9");
Sales_data item1(null_isbn); // ok
Sales_data item2("9-999-99999-9"); 
```
What happens if the Sales_data constructor are explicit?

## Exercise 7.49
> For each of the three following declarations of combine, explain what happens if we call i.combine(s), where i is a Sales_data and s is a string:
(a) Sales_data &combine(Sales_data); // 生成临时对象, 拷贝
(b) Sales_data &combine(Sales_data&);// Error
(c) Sales_data &combine(const Sales_data&) const;// 临时对象, 引用

## Exercise 7.50
> Determine whether any of your Person class constructors should be explicit.


## Exercise 7.51
> Why do you think vector defines its single-argument constructor as explicit, but string does not?
cc: vector会有歧义, 到底是元素还是尺寸
如果我们在需要传递vector的时候只是传递了一个数字, 没有意义
```c++ 
int getSize(const std::vector<>&);
getSize(34);
```

## Exercise 7.52
> Using our first version of Sales_data from 2.6.1 explain the following initialization. Identify and fix any problems.
```c++ 
Sales_data item = {"978-0590353403", 25, 15.99};
```

## Exercise 7.53
> Define your own version of Debug.
cc: 有constexpr构造, 无自定义虚函数, 无引用

## Exercise 7.54
> Should the members of Debug that begin with set_ be declared as constexpr? If not, why not?
cc: 不能, c++11中隐式为const, c++14中可以

## Exercise 7.55
> Is the Data class from 7.5.5 a literal class? If not, why not? If so, explain why it is literal.
cc: string不是字面量类型


## Exercise 7.56
> What is a static class member? What are the advantages of static members? How do they differ from ordinary members?
cc: 属于类, 不属于对象
可以作为自己的成员, 可以作为默认参数

## Exercise 7.57
> Write your own version of the Account class.

## Exercise 7.58
> Which, if any, of the following static data member declarations and definitions are errors? Explain why.
```c++ 
// example.h
class Example{
  public:
  static double rate = 6.5; // 应该是常量表达式
  static const int vecSize= 20;
  static vector<double> vec(vecSize);
};

// example.C
#include "example.h"
double Example::rate;
vector<double> Example::vec;
```
修改为
```c++ 
// example.h
class Example{
  public:
  static constexpr double rate = 6.5; // 应该是常量表达式
  static const int vecSize= 20;
  static vector<double> vec;
};

// example.C
#include "example.h"
constexpr double Example::rate;
vector<double> Example::vec(Example::vecSize);
```