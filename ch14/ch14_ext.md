## Exercise 14.1
> In what ways does an overloaded operator differ from a build-in operator? In what ways are overloaded operators the same as the built-in operators?
逗号, 短路与, 或
优先级和关联性一致

## Exercise 14.2
> Write declarations for the overloaded input, output, addition, and compound-assignment operators for Sales_data.
```c++ 
istream& operator>>(istream& is, Sales_data& item);
ostream& operator<<(ostream& os, const Sales_data& item);
Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs);

// 成员
Sales_data& operator+=(Sales_data& lhs, const Sales_data& rhs);
```

## Exercise 14.3
> Both string and vector define an overloaded == that can be used to compare objects of those types. Assuming svec1 and svec2 are vectors that hold strings, identify which version of == is applied in each of the following expressions:
(a) "cobble" =="stone" // 无
(b) svec1[0] == svec2[0] // string
(c) svec1 == svec2 // vector<string>
(d) svec1[0] =="stone" // string

## Exercise 14.4
> Explain how to decide whether the following should be class members:
(a) %  
(b) %= // 类
(c) ++ // 改变自身状态
(d) -> // 类
(e) << 
(f) && 
(g) == 
(h) () // 类

## Exercise 14.5
> In exercise 7.40 from 7.51 you wrote a sketch of one of the following classes. Decide what , if any, overloaded operators your class should provide.
(a) Book
(b) Date
(c) Employee
(d) Vehicle
(e) Object
(f) Tree

## Exercise 14.6
> Define an output operator for your Sales_data class.
```c++
ostream& operator<<(ostream& os, const Sales_data& item) {
    os << "ISBN: " << item.bookNo << endl;
    os << "Number of copies sold: " << item.numSold << endl;
    os << "Revenue: " << item.revenue << endl;
    return os;
}
```
## Exercise 14.7
> Define an output operator for you string class you wrote for the exercises in 13.5.

## Exercise 14.8
> Define an output operator for the class you chose in exercise 7.40 from 7.5.1

## Exercise 14.9
> Define an input operator for your Sales_data class.

## Exercise 14.10
> Describe the behavior of the Sales_data input operator if given the following input:
(a) 0-201-99999-9 10 24.95
(b) 10 24.95 0-201-99999-9

## Exercise 14.11
> What, if anything, is wrong with the following Sales_data input operator? What would happen if we gave this operator the data in the previous exercise?
```c++ 
istream& operator>>(istream& in, Sales_data& s){
  double price;
  in>>s.bookNo>>s.units_sold>>price;
  s.revenue = s.units_sold*price;
  return in;
}
```
cc: 没有检查输入是否有效

## Exercise 14.12
> Define an input operator for the class you used in exercise 7.40 from 7.5.1. Be sure the operator handles input errors.

## Exercise 14.13
> Which other arithmetic operators , if any, do you think Sales_data ought to support? Define any you think the class should include.

## Exercise 14.14
> Why do you think it is more efficient to define operator+ to call operator+= rather than the other way around?
如果是+= 调用+, 多了一个拷贝

## Exercise 14.15
> Should the class you choose for exercise 7.40 from 7.5.1 define any of the arithmetic operators? If so, implement them. If not, explain why not.

## Exercise 14.16
> Define equality and inequality operators for your StrBlob 12.1.1, StrBlobPtr 12.1.6, StrVec, and String classes.

## Exercise 14.17
> Should the class you chose for exercise 7.40 from 7.5.1 define the equality operators? If so, implement them. If not, explain why not.

## Exercise 14.18
> Define relational operators for your StrBlob, StrBlobPtr, StrVec, and String classes.

## Exercise 14.19
> Should the class you chose for exercise 7.40 from 7.5.1 define the relational operators? If so, implement them. If not, explain why not.

## Exercise 14.20
> Define the addition and compound-assignment operators for your Sales_data class.

## Exercise 14.21
> Write the Sales_data operators so that + does the actual addition and += calls +. Discuss the disadvantages of this approach compared to the way these operators were defined in 14.3 and 14.4

## Exercise 14.22
> Define a version of the assignment operator that can assign a string representing and ISBN to a Sales_data.

## Exercise 14.23
> Define an initializer_list assignment operator for your version of the StrVec class.

## Exercise 14.24
> Decide whether the class you used in exercise 7.40 from 7.5.1 needs a copy- nad move-assignment operator. If so, define those operators.

## Exercise 14.25
> Implement any other assignment operators your class should define. Explain which types should be used as operands and why.

## Exercise 14.26
> Define subscript operators for your StrVec, String, StrBlob, and StrBlobPtr classes.

## Exercise 14.27
> Add increment and decrement  operators to your StrBlobPtr class.

## Exercise 14.28
> Define addition and subtraction for StrBlobPtr so that these operations implement pointer arithmetic(3.5.3)

## Exercise 14.29
> We did not define a const version of the increment and decrement operators . Why not?

## Exercise 14.30
> Add dereference and arrow operators to your StrBlobPtr class and to the ConstStrBlobPtr class that you defined in 12.22 from 12.1.6 . Note that the operators in constStrBlobPtr must return const references because the data member constStrBlobPtr points to a const vector.

## Exercise 14.31
> Our StrBlobPtr class does not define the copy constructor, assignment operator, or a destructor. Why is that okay?


## Exercise 14.32
> Define a class that holds a pointer to a StrBlobPtr. Define the overloaded arrow operator for that class.

## Exercise 14.33
> How many operands may an overloaded function-call operator take?

## Exercise 14.34
> Define a function-object class to perform an if-then-else operation: The call operator for this class should take three parameters. It should test its first parameter and if that test succeeds, it should return its second parameter; otherwise, it should return its third parameter.

## Exercise 14.35
> Write a class like PrintString that reads a line of input from an istream and returns a string representing what was read. If the read fails , return the empty string.

## Exercise 14.36
> Use the class from the previous exercise to read the standard input, storing each line as an element in a vector.

## Exercise 14.37
> Write a class that tests whether two values are equal. Use that object and the library algorithms to write a program to replace all instances of a given value on a sequence

## Exercise 14.38
> Write a class that tests whether the length of a given string matches a given bound. Use that object to write a program to report how many words in an input file are of sizes 1 through 10 inclusive.

## Exercise 14.39
> Revise the previous program to report the count of words that are sizes 1 through 9 and 10 or more.

## Exercise 14.40
> Rewrite the biggies function from 102.3.2 to use function-object classes in place of lambdas.

## Exercise 14.41
> Why do you suppose the new standard added lambdas? Explain when you would use a lambda and when you would write a class instead.

## Exercise 14.42
> Using library function objects and adaptors , define an expression to 
(a) Count the number of values that are greater than 1024
(b) Find the first string that is not equal to pooh
(c) Multiply all values by 2

## Exercise 14.43
> Using library function objects, determine whether a given int value is divisible by any element in a container of ints.

## Exercise 14.44
> Write your own version of a simple desk calculator that can handle binary operations.

## Exercise 14.45
> Write conversion operators to convert a Sales_data to string and to double. What values do you think these operators should return  ?

## Exercise 14.46
> Explain whether defining these Sales_data conversion operators is a good idea and whether they should be explicit.

## Exercise 14.47
> Explain the difference between these two conversion operators:
```c++ 
struct Integral{
  operator const int(); // 没有意义
  operator int() const;
};
```

## Exercise 14.48
> Determine whether the class you used in exercise 7.40 from 7.5.1 should have a conversion to bool. If so , explain why, and explain whether the operator should be explicit. If not, explain why not.

## Exercise 14.49
> Regardless of whether it is a good idea to do so, define a conversion to bool for the class from the precious exercise.

## Exercise 14.50
> Show the possible class-type conversion sequences for the initializations of ex1 and ex2. Explain whether the initializations are legal or not.
```c++ 
struct LongDouble{
  LongDouble(double=0.0);
  operator double();
  operator float();
};

LongDouble ldObj;
int ex1 = ldObj; // 1 Error
float ex2 = ldObj; // 2 legal
```

## Exercise 14.51
> Show the conversion sequences (if any) needed to call each version of calc and explain why the best viable function is selected.
```c++ 
void calc(int);
void calc(LongDouble);
double dval;
calc(dval);
```
数学在类的 优先级前

## Exercise 14.52
> Which operator+, if any, is selected for each of the addition expressions? List the candidate functions, the viable functions, and the type conversions on the arguments for each viable function.
```c++ 
struct LongDouble{
  LongDouble operator+(const SmallInt&);
};
LongDouble operator+(LongDouble&, double);
SmallInt si;
LongDouble ld;
ld = si+ld; // 普通函数, si转化为double
ld = ld+si; // 成员函数
```
为什么si+ld会模糊?
调用成员函数需要交换顺序
调用全局函数, 需要转换double, 优先级一样

## Exercise 14.53
> Given the definition of SmallInt on page 588, determine whether the following addition expression is legal. If so, what addition operator is used? If not, how might you change the code to make it legal?
SmallInt s1;
double d  = s1+3.14;



