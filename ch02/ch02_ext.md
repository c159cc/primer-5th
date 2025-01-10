## Exercises 2.1
> What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?
short和int 最少16位, long long 最少64位, long 最少32位
unsigned 大于等于0
signed 负数和正数都可以表示

## Exercises 2.2
> To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

rate:   double
principal: 本金   double
payment:   double
不能确定是否可以为负数

## Exercises 2.3
> What output will the following code produce?
```c++
unsigned u = 10, u2 = 42;
std::cout <<u2-u<<std::endl; // 32
std::cout<< u-u2<<std::endl; // 很大的值

int i = 10, i2 = 42;
std::cout <<i2-i<<std::endl; // 32
std::cout<< i-i2<<std::endl; // -32

std::cout<<i-u<<std::endl; // 很大的值
std::cout<< u-i<<std::endl; // 32
```

## Exercises 2.4
> Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.

## Exercises 2.5
> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples.

```c++ 
(a) 'a', L'a', "a", L"a"
(b) 10, 10u, 10L, 10uL, 012, 0xC
(c) 3.14, 3.14f, 3.14L
(d) 10, 10u, 10., 10e-2
```
(a) char, wchar_t, char*, wchar_t* 
(b) int, unsigned int, long, unsigned long, octal, hexadecimal 
(c) double, float, long double 
(d) int, unsigned int, double, double

## Exercises 2.6
> What, if any, are the differences between the following definitions:
```c++ 
int month = 9, day = 7;
int month = 09, day = 07;
```
第二个是八进制, 09错了

## Exercises 2.7
> What values do these literals represent? What type does each have?

(a) "Who goes with F\145rgus?\012"
(b) 3.14e1L
(c) 1024f
(d) 3.14L
c错误了

## Exercises 2.8
> Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.


