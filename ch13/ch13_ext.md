## Exercise 13.1
> What is a copy constructor? When is it used?
cc: 第一个参数为引用, 剩下的为默认值, 拷贝初始化和直接初始化都会使用
- =
- 函数参数, 非引用时
- 函数返回值, 非引用时
- 数组或者聚合类, {}初始化时
- 库容器调用push, insert

## Exercise 13.2
> Explain why the following declaration is illegal:
Sales_data::Sales_data(Sales_data rhs);
调用需要能拷贝rhs, 拷贝rhs需要能调用

## Exercise 13.3
> What happens when we copy a StrBlob? What about StrBlobPtrs?

## Exercise 13.4
> Assuming Point is a class type with public copy constructor, identify each use of the copy constructor in this program fragment:
```c++ 
Point global;
Point foo_bar(Point arg){
  Point local = arg, *heap = new Point(global);
  *heap = local;
  Point pa[4] = {local, *heap};
  return *heap;
}
```
Point 没有删除, heap应该是*const
## Exercise 13.5
> Given the following sketch of a class, write a copy constructor that copies all the members. Your constructor should dynamically allocate a new string(12.1.12) and copy the object to which ps points, rather than copying ps itself.
```c++ 

class HasPtr{
  public:
  HasPtr(const string &s = string()):ps(new string(s)), i(0){ }
  private:
  string *ps;
  int i;
};
```

## Exercise 13.6
> What is a copy-assignment operator? When is this operator used? What does the synthesized copy-assignment operator do? When is it synthesized?
返回值左手操作数引用, 名称为operator=, 参数为const&, 初始化在大括号进行
在`=` 中使用
拷贝右手操作数到左手操作数, 返回左手操作数引用
用户没有定义的时候, 编译器合成

## Exercise 13.7
> What happens when we assign one StrBlob to another? What about StrBlobPtrs?
左边count-1, 右边count+1
StrBlobPtr 不影响count

## Exercise 13.8
> Write the assignment operator for the HasPtr class from exercise 13.5 in 13.1.1 . As with the copy constructor, your assignment operator should copy the object to which ps points.

## Exercise 13.9
> What is a destructor? What does the synthesized destructor do? When is a destructor synthesized?
没有返回值, 没有参数, 用来回收资源
逆序销毁成员
- 变量离开作用域
- 对象成员, 在对象销毁时
- 容器成员, 在容器销毁时
- delete
- 临时变量在表达式之后

## Exercise 13.10
> What happens when a StrBlob object is destroyed? What about a StrBlobPtr?

## Exercise 13.11
> Add a destructor to your HasPtr class from the previous exercises.

## Exercise 13.12
> How many destructor calls occur in the following code fragment?
```c++ 
bool fcn(const Sales_data *trans, Sales_data accum){
  Sales_data item1(*trans), item2(accum);
  return item1.isbn() != item2.isbn();
}
```

## Exercise 13.13
> A good way to understand copy-control members and constructors is to define a simple class with these members in which each member prints its name:
```c++ 
struct X{
  X(){cout<<"X()"<<endl;}
  X(const X&){
    cout<<"X(const X&)"<<endl;
  }
}
```
## Exercise 13.14
> Assume that numbered is a class with a default constructor that generates a unique serial number for each object, which is stored in a data member named mysn. Assuming numbered uses the synthesized copy control members and given the following function:
> void f(numbered s){cout<<s.mysn<<endl;}
what output does the following code produce?
numbered a, b=a, c=b;
f(a);f(b);f(c);

## Exercise 13.15
> Assume numbered has a copy constructor that generates a new serial number. Does that change the output of the calls in the previous exercise? If so, why? What output gets generated?

## Exercise 13.16
> What if the parameter in f were const numbered& ? Does that change the output? If so, why? What output gets generated?

## Exercise 13.17
> Write version of numbered and f corresponding to the previous three exercises and check whether you correctly predicted the output.

## Exercise 13.18
> Define an Employee class that contains an employee name and a unique employee identifier. Give the class a default constructor and a constructor that takes a string representing the employee's name. Each constructor should generate a unique ID by incrementing a static data member.


## Exercise 13.19
> Does your Employee class need to define its own versions of the copy-control members? If so, why? If not, why not? Implement whatever copy-control members you think Employee needs.

## Exercise 13.20
> Explain what happens when we copy, assign, or destroy objects of our TextQuery and QueryResult classes from 12.3.

## Exercise 13.21
> Do you think the TextQuery and QueryResult classes need to define their own versions fo the copy-control members? If so, why? If not, why not? Implement whichever  copy-control operations you think these classes require.

## Exercise 13.22
> Assume that we want HasPtr to behave like a value. That is , each object should have its own copy of the string to which the objects point. We'll show the definitions of the copy-control members in the next section. However, you already know everything you need to know to implement these members. Write the HasPtr copy constructor and copy-assignment operator before reading on.

```c++ 
class HasPtr{
  public:
  HasPtr(const string &s = string()):ps(new string(s)), i(0){ }
  private:
  string *ps;
  int i;
};
```

## Exercise 13.23
> Compare the copy control members that you wrote for the solutions to the previous section's exercises to the code presented here. Be sure you understand the differences, if any, between your code and ours.


## Exercise 13.24
> What would happen if the version of HasPtr in this section didn't define a destructor? What if HasPtr didn't define the copy constructor?

## Exercise 13.25
> Assume we want to define a version of StrBlob that acts like a value. Also assume that we want to continue to use a shared_ptr so that out StrBlobPtr class can still use a weak_ptr to the vector. Your revised class will need a copy constructor and copy-assignment operator but will not need a destructor. Explain that the copy constructor and copy assignment operators must do. Explain why the class does not need a destructor.
:: 拷贝控制需要分配自己需要的资源, 

## Exercise 13.26
> Write your own version of the StrBlob class described in the previous exercise.

## Exercise 13.27
> Define your own reference-counted version of HasPtr.

## Exercise 13.28
> Given the following classes , implement a default constructor and the necessary copy-control members.
(a)
class TreeNode{
  private:
  string value;
  int count;
  TreeNode *left, *right;
}
(b)
class BinStrTree{
  private:
  TreeNode *root;
};

## Exercise 13.29
> Explain why the calls to swap inside swap(HasPtr&, HasPtr&) do not cause a recursion loop.

## Exercise 13.30
> Write and test a swap function for your valuelike version of HasPtr. Give your swap a print statement that notes when it is executed.

## Exercise 13.31
> Give your class a < operator and define a vector of HasPtrs. Give that vector some elements and then sort the vector. Note when swap is called.


## Exercise 13.32
> Would the pointerlike version of HasPtr benefit from defining a swap function? If so, what is the benefit? If not, why not?

## Exercise 13.33
> Why is the parameter to the save and remove members of Message a Folder&? Why didn't we define that parameter as Folder? or const Folder&?

## Exercise 13.34
> Write the Message class as described in this section.

## Exercise 13.35
> What would happen if Message used the synthesized versions of the copy-control members?

## Exercise 13.36
> Design and implement the corresponding Folder class. That class should hold a set that points to the Messages in that Folder.

## Exercise 13.37
> Add members to the Message class to insert or remove a given Folder* into folders. These members are analogous to Folder's addMsg and remMsg operations.

## Exercise 13.38
> We did not use copy and swap to define the Message assignment operator. Why do you suppose this is so?

## Exercise 13.39
> Write your own version of StrVec, including versions of reserve, capacity, and resize.

## Exercise 13.40
> Add a constructor that takes an initializer_list<string> to your StrVec class.

## Exercise 13.41
> Why did we use postfix increment in the call to construct inside push_back? What would happen if it used the prefix increment?

## Exercise 13.42
> Test your StrVec class by using it in place of the vector<string> in your TextQuery and QueryResult classes.

## Exercise 13.43
> Rewrite the free member to use for_each and a lambda 10.3.2 in place of the for loop to destroy the elements. Which implementation do you prefer, and why?

## Exercise 13.44
> Write a class named String that is simplified version of the library string class. Your class should have at least a default constructor and a constructor that takes a pointer to a C-style string. Use an allocator to allocate memory that your String class uses.

## Exercise 13.45
> Distinguish between an rvalue reference and an lvalue reference.
cc: 左值有持久的状态, 右值是短暂的即将销毁的
常见的左值: 1.函数返回引用 2. 赋值, 下标, 解引用 3, 前缀增减

## Exercise 13.46
> Which kind of reference can be bound to the following initializers?
```c++ 
int f();
vector<int> vi(100);
int? r1 = f(); // rvalue
int? r2= vi[0]; //lvalue
int? r3 =r1; // lvalue
int? r4 = vi[0] *f(); // rvalue
```

## Exercise 13.47
> Given the copy constructor and copy-assignment operator in your String class from exercise 13.44 in 13.5 a statement that prints a message each time the function is executed.

## Exercise 13.48
> Define a vector<String> and call push_back several times on that vector. Run your program and see how often Stings are copied.

## Exercise 13.49
> Add a move constructor and move-assignment operator to your StrVec, String, and Message classes.

## Exercise 13.50
> Put print statements in the move operations in your String class and rerun the program form exercise 13.48 in 13.6.1 that used a vector<String> to see when the copies are avoided.

## Exercise 13.51
> Although unique_ptr cannot be copied, in 12.1.5 we wrote a clone function that returned a unique_ptr by value. Explain why that function is legal and how it works.
cc: 是不是使用了unique_ptr的移动构造

## Exercise 13.52
> Explain in detail what happens in the assignment of the HasPtr objects on page 541. In particular, describe step by step what happens to values of hp, hp2, and of the rhs parameter in the HasPtr assignment operator.

## Exercise 13.53
> As a matter of low-level efficiency , the HasPtr assignment operator is not ideal. Explain why. Implement a copy-assignment and move-assignment operator for HasPtr and compare the operations executed in your new move-assignment operator versus the copy-and-swap version.

## Exercise 13.54
> What would happen if we defined a HasPtr move-assignment operator but did not change the copy-and-swap operator? Write code to test your answer.

## Exercise 13.55
> Add an rvalue reference version of push_back to your StrBlob.

## Exercise 13.56
> What would happen if we defined sorted as:
```c++ 
Foo Foo::sorted() const &{
  Foo ret(*this);
  return ret.sorted();
}
```

## Exercise 13.57
> What if we defined sorted as:

```c++ 
Foo Foo::sorted() const &{return Foo(*this).sorted();}
```

## Exercise 13.58
> Write versions of class Foo with print statements in their sorted functions to test your answer to the previous two exercises.


