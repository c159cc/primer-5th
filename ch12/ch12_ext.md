## Exercise 12.1
> How many elements do b1 and b2 have at the end of this code?
```c++ 
StrBlob b1;
{
  StrBlob b2 = {"a","an","the"};
  b1 = b2;
  b2.push_back("about");
}
```
cc: b1有3个, b2有0个

## Exercise 12.2
> Write your own version of the StrBlob class including the const versions of front and back.

## Exercise 12.3
> Does this class need const versions of push_back and pop_back?? If so , add them . If not, why aren't they needed?

## Exercise 12.4
> In our check function we didn't check whether i was greater than zero. Why is it okay to omit that check?
size_t

## Exercise 12.5
> We did not make the constructor that takes an initializer_list explicit 7.5.4. Discuss the pros and cons of this design choice.


## Exercise 12.6
> Write a function that returns a dynamically allocated vector of ints. Pass that vector to another function that reads the standard input to give values to the elements. Pass the vector to another function to print the values that were read. Remember to delete the vector at the appropriate time.

## Exercise 12.7
> Redo the previous exercise , this time using shared_ptr;

## Exercise 12.8
> Explain what if anything is wrong with the following function.
```c++ 
bool b(){
  int *p = new int;
  return p;
}
```
没有删除
将要转化为bool, 意味着无法删除

## Exercise 12.9
> Explain what happens in the following code:
```c++ 
int *q = new int(42), *r = new int(100);
r = q ; // r无法删除
auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
r2 = q2 ; // q2 引用增加, r2 引用减少
```

## Exercise 12.10
> Explain whether the following call to the process function defined on page 464 is correct. If not, how would you correct the call?
shared_ptr<int> p(new int(42))
process(shared_ptr<int>(p ))

## Exercise 12.11
> What would happen if we called process as follows?
process(shared_ptr<int>(p.get()));
错误: 不能使用get()的指针初始化智能指针

## Exercise 12.12
> Using the declarations of p and sp explain each of the following calls to process. If the call is legal, explain what it does. If the call is illegal, explain why:
auto p = new int();
auto sp = make_shared<int>();
(a) process(sp); // ok
(b) process(new int()); // error , 普通到智能
(c) process(p); // error
(d) process(shared_ptr<int>(p)) // ok


## Exercise 12.13
> What happens if we execute the following code?
auto sp = make_shared<int>();
auto p = sp.get();
delete p;
// double free

## Exercise 12.14
> Write your own version of a function that uses a shared_ptr to manage a connection.

## Exercise 12.15
> Rewrite the first exercise to use a lambda 10.3.2 in place of the end_connection function.

## Exercise 12.16
> Compilers don't always give easy-to-understand error messages if we attempt to copy or assign a unique_ptr. Write a program that contains these errors to see how your compiler diagnoses them.

## Exercise 12.17
> Which of the following unique_ptr declarations are illegal or likely to result in subsequent program error? Explain what the problem is with each one.

int ix = 1024, *pi =&ix, *pi2 = new int(2048);
typedef unique_ptr<int> IntP;
(a) IntP p0(ix);// 错误: 整型
(b) IntP p1(pi); // 错误: 普通指针
(c) IntP p2(pi2); // ok, 可能多次删除问题
(d) IntP p3(&ix);// 错误
(e) IntP p4(new int(2048));// okay
(f) IntP p5(p2.get())

## Exercise 12.18
> Why doesn't share_ptr have a release member?
cc: 多个引用, 返回的内部指针不能用来构造新的shared_ptr

## Exercise 12.19
> Define your own version of StrBlobPtr and update your StrBlob class with the appropriate friend declaration and begin and end members.


## Exercise 12.20
> Write a program that reads an input file a line at a time into a StrBlob and uses a StrBlobPtr to print each element in that StrBlob.

## Exercise 12.21
> We could have written SrtBlobPtr's deref member as follows:
```c++ 
string& deref() const
{
  return (*check(curr, "dereference past end"))[curr];
}
```
which version do you think is better and why?


## Exercise 12.22
> What changes would need to be made to StrBlobPtr to create a class that can be used with a const StrBlob? Define a class named ConstStrBlobPtr that can point to a const StrBlob.
cc: 当一个对象是常量的时候, 有什么不同?
Foo f1;
const Foo f2;
一个类对象是常量是什么意思 ? 有什么含义
他所调用的函数必须带有const关键字, 不能修改成员

## Exercise 12.23
> Write a program to concatenate two string literals , putting the result in a dynamically allocated array of char. Write a program to concatenate two library strings that have the same value as the literals used in the first program.

## Exercise 12.24
> Write a program that reads a string from the standard input into a dynamically allocated character array. describe how your program handles varying size inputs. Test your program by giving it a string of data that is longer than the array size you'va allocated.

## Exercise 12.25
> Given the following new expression, how would you delete pa?

int *pa = new int[10];
cc: delete [] pa;

## Exercise 12.26
> Rewrite the program on page 481 using an allocator.
```c++ 
string *const p = new string[n]; // 构造了n个空strings
string s;
string *q =p;
while(cin>>s&&q!=p+n)
    *q++ = s;
const size_t size = q-p; // 记住我们读了多少个字符
delete [] p;
```

## Exercise 12.27
> The TextQuery and QueryResult classes use only capabilities that we have already covered. Without looking ahead, write your own versions of these classes.


## Exercise 12.28
> Write a program to implement text queries without defining class to manage the data. Your program should take a file and interact with a user to query for words in that file. Use vector, map, and set containers to hold the data for the file and to generate the results for the queries.

## Exercise 12.29
> We could have written the loop to manage the interaction with the use asa a do while 5.4.4 loop. Rewrite the loop to use a do while. Explain which version you prefer and why.

## Exercise 12.30
> Define your own versions of the TextQuery and QueryResult classes and execute the runQueries function from 12.3.1

## Exercise 12.31
> What difference(s) would it make if we used a vector instead of a set  to hold the line numbers? Which approach is better ? Why?

## Exercise 12.32
> Rewrite the TextQuery and QueryResult classes to use a StrBlob instead of a vector<string> to hold the input file.

## Exercise 12.33
> In Chapter 15 we'll extend our query system and will need some additional members in the QueryResult class. Add members named begin and end that return iterators into the set of line numbers returned by a given query, and a member named get_file that return a shared_ptr to the file in the QueryResult object.
