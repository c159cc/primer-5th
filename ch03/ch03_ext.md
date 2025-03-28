## Exercise 3.1
> Rewrite the exercises from 1.4.1 and 2.6.2 with appropriate using declarations.

## Exercise 3.2
> Write a program to read the standard input a line at a time. Modify your program to read a word at a time.

## Exercise 3.3
> Explain how whitespace characters are handled in the string input operator and in the getline function.
input operator中前缀空格被省略, 读取字符直到遇到空格
getline中 读取一整行, 包括读取newline, 写入string的时候抛弃newline

## Exercise 3.4
> Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger. Now , change the program to report whether the strings have the same length, and if not, report which is longer.

## Exercise 3.5
> Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change the program to separate input strings by a space.

## Exercise 3.6
> Use a range for to change all the characters in a string to X.
```cpp
string s = "hello world";
for (char& c : s) {
    c = 'X';
}
cout << s << endl; // output: XXXXXXXX
```

## Exercise 3.7
> What would happen if you define the loop control variable in the previous exercise as type char? Predict the results and then change your program to use a char to see if you were right.

## Exercise 3.8
> Rewrite the program in the first exercise, first using a while and again a traditional for loop. Which of the three approaches do you prefer and why?

## Exercise 3.9
> What does the following program do? Is it valid? If not, why not ?
```c++ 
string s;
cout<<s[0]<<endl;
```
s 使用之前没有判断是否为空

## Exercise 3.10
> Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.

## Exercise 3.11
> Is the following range for legal? If so, what is the type of c?
```cpp
const string s = "Keep out!";
for(auto &c:s){/*...*/}
```

## Exercise 3.12
> Which, if any, of the following vector definitions are in error? For those that are legal, explain what the definitions does. For those that are not legal, explain why they are illegal.
(a) vector<vector<int>> ivec;
(b) vector<string> svec = ivec; // 不合法, 类型不匹配
(c) vector<string> svec(10, "null");

## Exercise 3.13
> How many elements are there in each of the folowing vectors? What are the values of the elements?
```c++ 
(a) vector<int> v1; //0
(b) vector<int> v2(10); //10
(c) vector<int> v3(10, 42); //10, 42
(d) vector<int> v4{10};//1
(e) vector<int> v5{10, 42}; //2
(f) vector<string> v6{10};  // 10
(g) vector<string> v7{10, "hi"}; //10, "hi"

```

## Exercise 3.14
> Write a program to read a sequence of ints from cin and store those values in a vector.

## Exercise 3.15
> Repeat the previous program but read strings this time.


## Exercise 3.16
> Write a program to print the size and contents of the vectors from exercise 3.13. Check whether the answers to that exercise were correct. If not, restudy 3.3.1 until you understand why you were wrong.

## Exercise 3.17
> Read a sequence of words from cin and store the values a vector. After you've read all the words, process the vector and change each word to uppercase. Print the transformed elements, eight words to a line.


## Exercise 3.18
> Is the following program legal? If not, how might you fix it?
```c++ 
vector<int> ivec;
ivec[0] = 42;
```
## Exercise 3.19
> List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.


## Exercise 3.20
> Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change your program so that it prints the sum of the first and last elements, followed by the sum of the second and second-to-last, and so on.

## Exercise 3.21
> Redo the first exercise from 3.3.3 using iterators.


## Exercise 3.22
> Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond to the first paragraph to all uppercase. After you've updated text, print its contents.

## Exercise 3.23
> Write a program to create a vector with ten int elements. Using an iterator, assign each element a value that is twice its current value. Test your program by printing the vector.

## Exercise 3.24
Redo the last exercise from 3.3.3 using iterators.

## Exercise 3.25
> Rewrite the grade clustering program from 3.3.3 using iterators instead of subscripts.

## Exercise 3.26
> In the binary search program on page 112, why did we write mid=beg+(end-beg)/2; instead of mid=(beg+end)/2;?
因为没有beg+end


## Exercise 3.27
> Assuming txt_size is a function that takes no arguments and returns an int value, which of the following definitions are illegal? Explain why.
unsigned buf_size= 1024;
(a) int ia[buf_size]; // 不合法, 非常量
(b) int ia[4*7-14]; // 合法
(c) int ia[text_size()]; // 不合法
(d) char st[11] = "fundamental"; // 不合法, 空间不够

## Exercise 3.28
> What are the values in the following arrays?
string sa[10]; // 10个空字符串
int ia[10]; // 10个0
int main(){
  string sa2[10]; // 10个空字符串
  int ia2[10]; // 未定义
}

## Exercise 3.29
> List some of the drawbacks of using an array instead of a vector.
尺寸不可变
没有易用的api
易错

## Exercise 3.30
> Identify the indexing errors in the following code:
constexpr size_t array_size = 10;
int ia[array_size];
for(size_t ix=1; ix<= array_size; ++ix)
ia[ix] =ix;
不能等于

## Exercise 3.31
> Write a program to define an array of ten ints. Given each element the same value as its position in the array.

## Exercise 3.32
> Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.

## Exercise 3.33
> What would happen if we did not initialize the scores array in the program on page 116?

值未定义



## Exercise 3.34
> Given that p1 and p2 point to elements in the same array, what does the following code do? Are there values of p1 and p2 that make this code illegal?

p1+=p2-p1;
cc: 都合法

## Exercise 3.35
> Using pointers, write a program to set the elements in an array to zero.

## Exercise 3.36
> Write a program to compare two arrays for equality. Write a similar program to compare two vectors.
 

## Exercise 3.37
> What does the following program do?
```c++ 
const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while(*cp){
    cout<<*cp<<endl;
    ++cp;
}
``` 
cc: 程序会输出, 但是不会终止, 没有没有null terminated

## Exercise 3.38
> In this section, we noted that is was not only illegal but meaningless to try to add two pointers. Why would adding two pointers be meaningless?

cc: 两个地址相加没有意义

## Exercise 3.39
> Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.

## Exercise 3.40
> Write a program to define two character arrays initialized from string literals. Now define a third character array to hold the concatenation of the two arrays. Use strcpy and strcat to copy the two arrays into third.


## Exercise 3.41
> Write a program to initialize a vector from an array of ints.

## Exercise 3.42
> Write a program to copy a vector of ints into an array of ints.

## Exercise 3.43
> Write three different versions of a program to print the elements of ia. One version should use a range for to manage the iteration, the other two should use an ordinary for loop in one case using subscripts and in the other using pointers. In all three programs write all the types directly. That is, do not use a type alias, auto, or decltype to simplify the code.

## Exercise 3.44
> Rewrite the programs from the previous exercises using a type alias for the type of the loop control variables.

using int_array = int[4];
typedef int int_array[4];

## Exercise 3.45
> Rewrite the programs again, this time using auto;

auto会吃掉const和引用
