## Exercise 19.1
> Write your own operator new(size_t) function using malloc and use free to write the operator delete(void*) function.

## Exercise 19.2
> By default, the allocator class uses operator new to obtain storage and operator delete to free it. Recompile and rerun your StrVec programs(13.5) using your versions of the functions from the previous exercise.

## Exercise 19.3
> Given the following class hierarchy in which each class defines a public default constructor and virtual destructor:
```c++ 
class A{}
class B: public A{}
class C: public B{}
class D: public B, public A{}
```
which, if any, of the following dynamic_casts fail?
(a) A *pa = new C;
B *pb = dynamic_cast<B*>(pa); // ok
(b) B *pb = new B; 
C *pc = dynamic_cast<C*>(pb); // fail
(c) A *pa = new D;
B *pb = dynamic_cast<B*>(pa); // fail

## Exercise 19.4
> Using the classes defined in the first exercise, rewrite the following code to convert the expression *pa to the type C&:
```c++ 
if(C *pc = dynamic_cast<C*>(pa)){
  
}else{}
```

try{
  c &c_ref = dynamic_cast<c&>(*pa) 
}catch(std::bad_cast e){

}

## Exercise 19.5
> When should you use a dynamic_cast instead of a virtual function?
如果无法为基类增加虚函数

## Exercise 19.6
> Write an expression to dynamically cast a pointer to a Query_base to a pointer to an AndQuery(15.9.1). Test the cast by using objects of AndQuery and of another query type. Print a statement indicating whether the cast works and be sure that the output matches your expectations.

## Exercise 19.7
> Write the same cast, but cast a Query_base object to a reference to AndQuery. Repeat the test to ensure that your cast works correctly.

## Exercise 19.8
> Write a typeid expression to see whether two Query_base pointers point to the same type. Now check whether that type is an AndQuery.

## Exercise 19.9
> Write a program similar to the last one in this section to print the names your compiler uses for common type names. If your compiler gives output similar to ours, write a function that will translate those strings to more human-friendly form.

## Exercise 19.10
> Given the following class hierarchy in which each class defines a public default constructor and virtual destructor, which type name do the following statements print?
```c++ 
class A{}
class B: public A{}
class C: public B{}
(a) A*pa = new C;
cout<<typeid(pa).name()<<endl; 
(b) C cobj;
A& ra = cobj;
cout<<typeid(&ra).name()<<endl;
(c) B *px = new B;
A& ra = *px;
cout<<typeid(ra).name()<<endl;
```

## Exercise 19.11
> What is the difference between an ordinary data pointer and a pointer to a data member?
一个指向内存中的对象int*
一个表示类的成员int A::*

## Exercise 19.12
> Define a pointer to member that can point to the cursor member of class Screen. Fetch the value of Screen::cursor through that pointer.

## Exercise 19.13
> Define the type that can represent a pointer to the bookNo member of the Sales_data class.

## Exercise 19.14
> Is the following code legal? If so, what does it do? If not, why?
```c++ 
auto pmf = &Screen::get_cursor;
pmf = &Screen::get;
```
代表了成员指针

## Exercise 19.15
> What is the difference between an ordinary function pointer and a pointer to a member function?
一个是表示内存地址
一个表示成员占位符, 需要指出类名和const限定符

## Exercise 19.16
> Write a type alias that is a synonym for a pointer that can point to the avg_price member of Sales_data.

## Exercise 19.17
> Define a type alias for each distinct Screen member function type.

## Exercise 19.18
> Write a function that uses count_if to count how many empty strings there are in a given vector.

## Exercise 19.19
> Write a function that takes a vector<Sales_data> and finds the first element whose average price is greater than some given amount.

## Exercise 19.20
> Nest your QueryResult class inside TextQuery and rerun the programs you wrote to use TextQuery in 12.3.2.


## Exercise 19.21
> Write your own version of the Token class.

## Exercise 19.22
> Add a member of type Sales_data to your Token class.

## Exercise 19.23
> Add a move constructor and move assignment to Token.

## Exercise 19.24
> Explain what happens if we assign a Token object to itself?

## Exercise 19.25
> Write assignment operators that take values of each type in the union.

## Exercise 19.26
> Explain these declarations and indicate whether they are legal:
```c++ 
extern "C" int compute(int*, int);
extern "C" double compute(double *, double);
```
不能有相同的名字





