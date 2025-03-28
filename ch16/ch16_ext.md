## Exercise 16.1
> Define instantiation.
传递模板实参, 构造实例的过程

## Exercise 16.2
> Write and test your own versions of the compare functions.

## Exercise 16.3
> Call your compare function on two Sales_data objects to see how your compiler handles errors during instantiation.

## Exercise 16.4
> Write a template that acts like the library find algorithm. The function will need two template type parameters, one to represent the functions iterator parameter and the other for the type of the value. Use your function to find a given value in a vector<int> and in a list<string>

## Exercise 16.5
>  Write a template version of the print function from 6.2.4 that takes a reference to an array and can handle arrays of any size and any element type.

## Exercise 16.6
> How do you think the library begin and end functions that take an array argument work? Define your own versions of these functions.

## Exercise 16.7
> Write a constexpr template that returns the size of a given array.

## Exercise 16.8
> In the "Key Concept" box on page 108, we noted that as a matter of habit C++ programmers prefer using != to using <. Explain the rationale for this habit.


## Exercise 16.9
> What is a function template ? What a class template?
函数模板: 实例化得到函数的模板
类模板: 实例化得到类的模板
类模板不能根据参数推断, 需要显示提供模板参数

## Exercise 16.10
> What happens when a class template is instantiated?
cc: 使用模板实参得到一个类类型

## Exercise 16.11
> The following definition of List is incorrect. How would you fix it?
```c++ 
template <typename elemType> class ListItem;
template <typename elemType> class List{
  List<elemType>();
  List<elemType> (const List<elemType> &);
  List<elemType> & operator=(const List<elemType> &);
  ~List(); 
  void insert(ListItem *ptr, elemType value);
  //                ^^^^^^ 这里
  private: 
  ListItem *front, *end; 
  //    ^^^^^   这里
};

```
ListItem 需要指定类型<elemType> 2个地方

## Exercise 16.12
> Write your own version of the Blob and BlobPtr templates. including the various const members that were not shown in the text.
这个类比较大, 放在后面

## Exercise 16.13
> Explain which kind of friendship you chose for the equality and relational operators for BlobPtr.

## Exercise 16.14
> Write a Screen class template that uses nontype parameters to define the height and width of the Screen.
```c++ 
template <unsigned,unsigned> class Screen{}
// 修改为
template <unsigned H, unsigned W> class Screen{}
```
## Exercise 16.15
> Implement input and output operators for your Screen template. Which, if any, friends are necessary in class Screen to make the input and output  operators work? Explain why each friend declaration, if any, was needed.
要访问私有成员


## Exercise 16.16
> Rewrite the StrVec class(13.5) as a template named Vec.

## Exercise 16.17
> What, if any, are the differences between a type parameter that is declared as a typename and one that is declared as a class? When must typename be used?
使用成员类型的时候, 必须使用typename
双引号的时候使用单引号, 所以使用class区分template

## Exercise 16.18
> Explain each of the following function template declarations and identify whether any are illegal. Correct each error that you find.
```c++ 
(a) template<typename T, U, typename V> void f1(T, U, V);
                    ^^^^^^^^^ 少了typename
(b) template <typename T> T f2(int &T);
                                 ^^^^^^^ 不能重用模板形参
(c) inline template <typename T> T foo(T, unsigned 
int*);
(d) template <typename T> f4(T, T);
// 没有返回值
(e) typedef char Ctype; 
template <typename Ctype> Ctype f5(Ctype a);
// 不能使用关键字
```
inline 必须在模板之后
template <typename T> inline T foo(T, unsigned int*)

Ctype 会隐藏作为char别名的Ctype

## Exercise 16.19
> Write a function that takes a reference to a container and prints the elements in that container. Use the container's size_type and size members to control the loop that prints the elements.
```c++ 
template <typename Container>
void print_elements(const Container& c) {
    for (typename Container::size_type i = 0; i < c.size(); ++i) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;
}
```
## Exercise 16.20
> Rewrite the function from the previous exercise to use iterators returned from the begin and end to control the loop.
```c++ 
template <typename Container>
void print_elements(const Container& c) {
    for (auto it = c.begin(); it!= c.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
``` 
cc: 这里使用cbegin和cend更好

## Exercise 16.21
> Write your own version of DebugDelete.

## Exercise 16.22
> Revise your TextQuery programs from 12.3 so that the shared_ptr members use a DebugDelete as their deleter.

## Exercise 16.23
> Predict when the call operator will be executed in our main query program. If your expectations and what happens differ, be sure you understand why.

## Exercise 16.24
> Add a constructor that takes two iterators to your Blob template.

## Exercise 16.25
> Explain the meaning of these declarations:
```c++ 
extern template class vector<string>; //  某个地方有定义
template class vector<Sales_data>;// 定义, 实例化所有成员
```

## Exercise 16.26
> Assuming NoDefault is a class that does not have a default constructor, can we explicitly instantiate vector<NoDefault> ? If not, why not?

## Exercise 16.27
> For each labeled statement explain what, if any, instantiations happen. If a template is instantiated, explain why; if not, explain why not.
```c++ 
template <typename T> class Stack{};
void f1(Stack<char>);
class Exercise{
  Stack<double> &rsd;
  Stack<int> si;
};
int main(){
  Stack<char> *sc;
  f1(*sc);
  int iObj = sizeof(Stack<string>);
}
```
## Exercise 16.28
> Write your own versions of shared_ptr and unique_ptr.

## Exercise 16.29
> Revise your Blob class to use your version of shared_ptr rather than library version.

## Exercise 16.30
> Rerun some of your programs to verify your shared_ptr and revised Blob classes(Note: Implementing the weak_ptr type is beyond the scope of this Primer, so you will not be able to use the BlobPtr class with your revised Blob.)

## Exercise 16.31
> Explain how the compiler might inline the call to the deleter if we used DebugDelete with unique_ptr.

## Exercise 16.32
> What happens during template argument deduction?
只有top-level const和数组函数到指针的转化被允许

## Exercise 16.33
> Name two type conversions allowed on function arguments involved in template argument deduction.


## Exercise 16.34
> Given only the following code, explain whether each of these calls is legal. If so, what is the type of T? If not, why not?
template <class T> int compare(const T&, const T&);
(a) compare("hi", "world");
(b) compare("bye", "dad");
我以为a和b的例子是一样, 其实不一样

## Exercise 16.35
> Which, if any, of  the following calls are errors? If the call is legal, what is the type of T? If the call is not legal, what is the problem?
```c++ 
template <typename T> T calc(T, int);
template <typename T> T fcn(T, T);
double d; float f; char c;
(a) calc(c, 'c');
(b) calc(d, f);
(c) fcn(c, 'c');
(d) fcn(d, f);
```

## Exercise 16.36
> What happens in the following calls:
template <typename T> f1(T, T);
template <typename T1, typename T2> f2(T1, T2);
int i = 0, j= 42, *p1 = &i1, *p2 = &j;
const int *cp1 = &i, *cp2 = &j;

(a) f1(p1, p2); // T为int*
(b) f2(p1, p2); // T1为int*, T2为int*
(c) f1(cp1, cp2); // T为const int*
(d) f2(cp1, cp2); // T1为const int*, T2为const int*
(e) f1(p1, cp1); // error, 
(f) f2(p1, cp1); // ok
我不能修改对象, 你从我这里得到的引用, 你也不不能修改

## Exercise 16.37
> The library max function has two function parameters and returns the larger of its arguments. This function has one template type parameter. Could you call max passing it an int and  double? If so, how? If not, why not?
不行, 因为类型不匹配

## Exercise 16.38
> When we call make_shared(12.1.1), we have to provide an explicit template argument. Explain why that argument is needed and how it is used.
没有类型, make_shared不知道分配多大的内存

## Exercise 16.39
> Use an explicit template argument to make it sensible to pass two string literals to the original version of compare from 16.1.1

## Exercise 16.40
> Is the following legal? If not, why not? If it is legal, what, if any, are the restrictions on the argument type(s) that can be passed, and what is the return type?
```c++ 
template <typename It> auto fcn3(It beg, It end)->decltype(*beg +0){
  return *beg;
}
```
必须要支持+0操作才成立

## Exercise 16.41
> Write a version of sum with a return type that is guaranteed to be large enough to hold the result of the addition.
```c++ 
template <typename T> auto sum(T a, T b) -> decltype(a + b) {
    return a + b;
}
```

## Exercise 16.42
> Determine the type of T and of val in each of the following calls:

```c++ 
template <typename T> void g(T&& val);
int i = 0; const int ci = i;
(a) g(i); // T&
(b) g(ci); // const int&
(c) g(i*ci); // T
```

## Exercise 16.43
> Using the function defined in the previous exercise, what would the template parameter of g be if we called g(i=ci)? 
cc: int&

## Exercise 16.44
> Using the same three calls as in the first exercise, determine the types for T if g's function parameter is declared as T (not T&&). What if g's function parameter is const T&?
(a) g(i); //  T
(b) g(ci); //  T
(c) g(i*ci); // T

// const T&
(a) g(i); //  int
(b) g(ci); //  int
(c) g(i*ci); // int


## Exercise 16.45
> Given the following template, explain what happens if we call g on a literal value such as 42. What if we call g on a variable of type int?
```c++ 
template <typename T> void g(T&& val){vector<T> v;}
```
typename 能搭配42?  这个可以
T被推断为int&也不对把, 这个确实不行

## Exercise 16.46
> Explain this loop from StrVec::reallocate in 13.5

for(size_t i =0; i!=size(); ++i)
alloc.construct(dest++, std::move(*elem++));

construct 接收右值引用

## Exercise 16.47
> Write your own version of the flip function and test it by calling functions that have lvalue and rvalue reference parameters.

## Exercise 16.48
> Write your own versions of the debug_rep functions.

## Exercise 16.49
> Explain what happens in each of the following calls:
```c++ 
template <typename T> void f(T);
template <typename T> void f(const T*);
template <typename T> void g(T);
template <typename T> void g(T*);
int i = 42, *p =&i;
const int ci = 0, *p2 = &ci;
g(42); //g(T) T推断为int
g(p);// g(T*) T推断为int
g(ci);//g(T) T推断为int
g(p2);// g(T*) T推断为const int
f(42); // int
~~ f(p);  // f(const T*) T推断为int ~~
f(ci);  // int
f(p2); // int
```
f(p) 因为p为int*, 如果调用f(const T*) 需要增加low-level const

## Exercise 16.50
> Define the functions from the previous exercise so that they print an identifying message. Run the code from that exercise. If the calls behave differently from what you expected, make sure you understand why.

## Exercise 16.51
> Determine what sizeof...(Args) and sizeof...(rest) return for each call to foo in this section.

## Exercise 16.52
> Write a program to check your answer to the previous question.

## Exercise 16.53
> Write your own version of the print function and test them by printing one, two, and five arguments, each of which should have different types.

## Exercise 16.54
> What happens if we call print on a type that doesn't have an << operator?

## Exercise 16.55
> Explain how the variadic version of print would execute if we declared the nonvariadic version of print after the definition of the variadic version.

## Exercise 16.56
> Write and test a variadic version of errorMsg.

## Exercise 16.57
> Compare your variadic version of errorMsg to the error_msg function in 6.2.6. What are the advantages and disadvantages of each approach?

## Exercise 16.58
> Write the emplace_back function for your StrVec class and for the Vec class that you wrote for the exercises in 16.1.2.

## Exercise 16.59
> Assuming s is a string, explain svec.emplace_back(s)
s是一个左值
std::forward<Args>(args)... 通过args得到一个左值, 
返回一个左值

## Exercise 16.60
> Explain how make_shared 12.1.1 works.
接收包, 经过扩展传递给new

## Exercise 16.61
> Define your own version of make_shared
template <typename T> 
template <typename... Args> 
和
template <typename T, typename... Args>  
两种形式有什么区别?
一个用于嵌套模板, 在模板类或模板函数内部定义模板成员
一个用于单个模板声明

## Exercise 16.62
> Define your own version of hash<Sales_data> and define an unordered_multiset of Sales_data objects. Put several transactions into the container and print its contents.
要求: 要能进入hash操作符

## Exercise 16.63
> Define a function template to count the number of occurrences of a given value in a vector. Test your program by passing  it a vector of doubles, a vector of ints, and av vector of strings.
输出正确的数量
```c++ 
vector<double> vd = {1.1, 2.2, 3.3, 2.2, 4.4, 2.2};
// 2.2 出现3次
```

## Exercise 16.64
> Write a specialized version of the template from the previous exercise to handle vector<const char*> and a program that uses this specialization.

## Exercise 16.65
> In 16.3 we defined overloaded two versions of debug_rep one had a const char* and the other a char* parameter. Rewrite these functions as specializations.

## Exercise 16.66
> What are the advantages and disadvantages of overloading these debug_rep functions as compared to defining specializations?
重载和专业化的区别?
重载会改变函数匹配

## Exercise 16.67
> Would defining these specializations affect function matching for debug_rep? If so, how? If not, why not?
不改变



















