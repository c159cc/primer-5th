## Exercise 15.1
> What is a virtual member?
cc: 函数前面有virtual关键字, 类型依赖, 可以动态绑定

## Exercise 15.2
> How does the protected access specifier differ from private?
protected 派生类 可以访问

## Exercise 15.3
> Define your own versions of the Quote class and the print_total function.

## Exercise 15.4
> Which of the following declarations , if any, are incorrect? Explain why.
```c++ 
class Base{...};
(a) class Derived: public Derived{...};
(b) class Derived: private Base{...}; // ok
(c) class Derived: public Base;
```
cc: 没有一个是正确的声明

## Exercise 15.5
> Define your own version of the Bulk_quote class.

## Exercise 15.6
> Test your print_total function from the exercises in 15.2.1 by passing both Quote and Bulk_quote objects to that function.

## Exercise 15.7
> Define a class that implements a limited discount strategy, which applies a discount to books purchased up to a given limit. If the number of copies exceeds that limit, the normal price applies to those purchased beyond the limit.

## Exercise 15.8
> Define static type and dynamic type.
静态类型: 编译时知道
动态类型: 对象在内存中的类型

## Exercise 15.9
> When is it possible for an expression's static type to differ from its dynamic type? Give three examples in which the static and dynamic type differ.

## Exercise 15.10
> Recalling the discussion from 8.1 , explain how the program on page 317 that passed an ifstream to the Sales_data read function works.

## Exercise 15.11
> Add a virtual debug function to your Quote class hierarchy that displays the data members of the respective classes.
```c++ 
virtual void debug() const;
```

## Exercise 15.12
> Is it ever useful to declare a member function as both override and final? Why or why not?
可以

## Exercise 15.13
> Given the following classes, explain each print function:
```c++ 
class base{
  public:
  string name() {return basename;}
  virtual void print(ostream& os){os <<basename;}
  private:
  string basename;
};

class derived: public base{
  public:
  void print(ostream &os) {print(os);os<<" "<<i;} // 死循环
  private:
  int i ;
};
```
> If there is a problem in this code , how would you fix it?


## Exercise 15.14
> Given the classes from the previous exercise and the following objects, determine which function is called at run time:
```c++ 
base bobj; base *bp1 = &bobj; base &br1 = bobj;
derived dobj; base *bp2 = &dobj; base &br2 = dobj;
(a) bobj.print(); // base
(b) dobj.print(); // derived
(c) bp1->name(); // base
(d) bp2->name(); // derived
(e) br1.print(); // base
(f) br2.print(); // derived
```

## Exercise 15.15
> Define your own versions of Disc_quote and Bulk_quote.

## Exercise 15.16
> Rewrite the class representing a limited discount strategy, which you wrote for the exercises in 15.2.2, to inherit from Disc_quote.

## Exercise 15.17
> Try to define an object of type Disc_quote and see what errors you get from the compiler.

## Exercise 15.18
> Given the classes from page 612 and page 613, and assuming each object has the type specified in the comments , determine which of these assignments are legal. Explain why those that are illegal aren't allowed.
```c++ 
Base *p = &d1; // d1 Pub_Derv
p = &d2; // d2 Priv_Derv 不可以
p = &d3; // d3 Prot_Derv 不可以
p = &dd1; // dd1 Derived_from_Public 
p = &dd2; // dd2 Derived_from_Private 不可以
p = &dd3; // dd3 Derived_from_Protected 不可以
```
用户代码只有在public下才能使用派生类到基类的转化


## Exercise 15.19
> Assume that each of the classes from page 612 and page 613 has a member function of the form:
> void memfcn(Base &b){b = *this;}
> for each class, determine whether this function would be legal.
 会调用基类的赋值拷贝, 参数为const Base&

 ## Exercise 15.20
 > Write code to test your answers to the previous two exercises.

## Exercise 15.21
> Choose one of the following general abstractions containing a family of types (or choose one of your won).Organize the types into an inheritance hierarchy:
(a) Graphical file formats(such as gif, tiff, jpeg, bmp)
(b) Geometric primitives(such as box, circle, sphere, cone)
(c) C++ language types(such as class, function, member function)

## Exercise 15.22
> For the class you chose in the precious exercise, identify some of the likely virtual functions as well as public and protected members.

## Exercise 15.23
> Assuming class D1 on page 620 had intended to override its inherited fcn function, how would you fix that class? Assuming you fixed the class so that fcn matched the definition in Base, how would the calls in that section be resolved?

## Exercise 15.24
> What kinds of classes need a virtual destructor? What operations must a virtual destructor perform?
基类

## Exercise 15.25
> Why did we define a default constructor for Disc_quote? What effect , if any, would removing that constructor have on the behavior of Bulk_quote?

## Exercise 15.26
> Define the Quote and Bulk_quote copy-control members to do the same job as the synthesized versions. Give them and the other constructors print statements that identify which function is running. Write programs using these classes and predict that objects will be created and destroyed . Compare your predications with the output and continue experimenting until your predictions are reliably correct.

## Exercise 15.27
>  Redefine your Bulk_quote class to inherit its constructors.

## Exercise 15.28
> Define a vector to hold Quote objects but put Bulk_quote objects into that vector. Compute the total net_price of all the elements in the vector.

## Exercise 15.29
> Repeat your program, but this time store shared_ptrs to objects of type Quote. Explain any discrepancy in the sum generated by the this version and the previous program. If there is no discrepancy , explain why there isn't one.

## Exercise 15.30
> Write your own version of the Basket class and use it to compute prices for the same transactions as you used in the previous exercises.

## Exercise 15.31
> Given that s1, s2,s3 and s4 are all strings, determine what objects are created in the following expressions:
(a) Query(s1)|Query(s2) &~ Query(s3)
(b) Query(s1) |( Query(s2)  &~ Query(s3))
(c) (Query(s1) & Query(s2)) | (Query(s3) & Query(s4))

## Exercise 15.32
> What happens when an object of type Query is copied, moved, assigned, and destroyed?

## Exercise 15.33
> What about objects of type Query_base?

## Exercise 15.34
> For the expression built in Figure 15.3:
> (a) List the constructors executed in processing that expression.
> (b) List the calls to rep that are made from cout<<q.
> (c) List the calls to eval made from q.eval().
Query q = Query("a") & Query("b")|Query("c");
1. Query(const string& s) 构造a,b,c
2. WordQuery(const string& s)
这里为什么会调用WordQuery? 存在这样的构造函数
3. a&b 调用了AndQuery->BinaryQuery
4. |c 调用了OrQuery->BinaryQuery


b.
最后调用了or的rep
lhs.rep()
  and.rep
    word.rep 
    word.rep
  word.rep
rhs.rep()

## Exercise 15.35
> Implement the Query and Query_base classes, including a definition of rep but omitting the definition of eval.

## Exercise 15.36
> Put print statements in the constructors and rep members and run your code to check your answers to (a) and (b) from the first exercise.


## Exercise 15.37
> What changes would your classes need if the derived classes had members of type shared_ptr<Query_base> rather than of type Query?

## Exercise 15.38
> Are the following declarations legal? If not, why not? If so, explain what the declarations mean.
BinaryQuery a = Query("fiery")&Query("bird");
AndQuery b = Query("fiery")&Query("bird");
OrQuery c = Query("fiery")&Query("bird");
因为他们返回的是Query, 所以都是错的

## Exercise 15.39
>  Implement the Query and Query_base classes. Test your application by evaluating and printing a query such as the one in Figure 15.3.

## Exercise 15.40
> In the OrQuery eval function what would happen if its rhs member returned an empty set? What if its lhs member did so? What if both rhs and lhs returned empty sets?


## Exercise 15.41
> Reimplement your classes to use built-in pointers to Query_base rather than shared_ptrs . Remember that your lasses will no longer be able to use the synthesized copy-control members.

## Exercise 15.42
> Design and implement one of the following enhancements:
> (a) Print words only once per sentences rather than once per line.
> (b) Introduce a history system in which the user can refer to a precious query by number, possibly adding to it or combining it with another.
> (c) Allow the user to limit the results so that only matches in a given range of lines are displayed.



