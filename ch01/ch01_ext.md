## Exercises 1.1
> Review the documentation for your compiler and determine what file naming convention it uses. Compile and run the main program from page 2.

g++ -o prog1 prog1.cpp
prog1
echo %errorlevel%

## Exercises 1.2
> Change the program to return -1. A return value of  -1 is often treated as an indicator that the program failed. Recompile and rerun your program to see how your system treats a failure indicator from main.

## Exercises 1.3
> Write a program to print Hello, World on the standard output.

## Exercises 1.4
> Our Program used the addition operator, +, to add two numbers. Write a program that uses the multiplication operator, *, to print the product instead.

## Exercises 1.5
> We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.

## Exercises 1.6
> Explain whether the following program fragment is legal.
```cpp
std::cout<<"The sum of "<<v1;
<<" and "<<v2;
<< " is  "<< v1+v2<<std::endl;
```
If the program is legal, what does it to? If the program is not legal, why not? How would you fix it?
不合法, 删除这封号

## Exercises 1.7
> Compile a program that has incorrectly nested comments.


## Exercises 1.8
> Indicate which, if any, of the following output statements are legal:
```cpp
std::cout<<"/*";
std::cout<<"*/";
std::cout<</*"*/"*/;
std::cout<</* "*/" /* "/*" */;
```
After you've predicted what will happen, test your answers by compiling a program with each of these statements . Correct any errors you encounter.

## Exercises 1.9
> Write a program that uses a while to sum the numbers from 50 to 100.


## Exercises 1.10
> In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.

## Exercises 1.11
> Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.

## Exercises 1.12
> What does the following for loop do? What is the final value of sum?

```cpp
int sum = 0;
for (int i = -100; i <= 100; i++)
{
    sum += i;
}
```
结果为: 0 

## Exercises 1.13
> Rewrite the exercises from 1.4.1 using for loops.


## Exercises 1.14
> Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form?

## Exercises 1.15
> Write programs that contain the common errors discussed  in the box on page 16. Familiarize yourself with the message the compiler generates.

## Exercises 1.16
> Write your own version of a program that prints the sum of a set of integers read from cin.

## Exercises 1.17
> what happens in the program presented in this section if the input values are all equal? what if there are no duplicated values?

## Exercises 1.18
> Compile and run the program  from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.

## Exercises 1.19
> Revise the program you wrote for the exercises in 1.4.1 that printed a range of numbers so that it handles input in which the first number is smaller than the second.

## Exercises 1.20
> http://www.informit.com/title/032174113 contains a copy of Sales_item.h in the Chapter1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output.


## Exercises 1.21
> Write a program that read two Sales_item objects that have the same ISBN and produces their sum.

## Exercises 1.22
> Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were read.

## Exercises 1.23
> Write a program that reads several transactions and counts how many transactions occur for each ISBN.


## Exercises 1.24
> Test the previous program by giving multiple transactions representing multiple ISBNS. The records for each ISBN should be grouped together.


## Exercises 1.25
> Using the Sales_item.h header from the Web site, compile and execute the bookstore program presented in this section.


























