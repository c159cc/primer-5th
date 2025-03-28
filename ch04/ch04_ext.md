## Exercise 4.1
> What is the value returned by 5+10*20/2?

105

## Exercise 4.2
> Using Table 4.12 , parenthesize the following expressions to indicate the order in which the operands are grouped:

(a) *vec.begin()
(b) *vec.begin()+1
cc: (*vec.begin())+1

## Exercise 4.3
> Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off ? Why or why not?

## Exercise 4.4
> Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression (without parentheses) and printing its result.

12/3*4+5*15+24%4/2;
91

## Exercise 4.5
> Determine the result of the following expression.

(a) -30*3 + 21/5; // -86
(b) -30+3*21/5; // ~~-12~~   -18
(c) 30/3*21%5; // 0
(d) -30/3*21%4; // -2



## Exercise 4.6
> Write an expression to determine whether an int value is even or odd.

 0x1&i ? "even" : "odd";

## Exercise 4.7
> What does overflow mean? Show three expressions that will overflow.

cc: 有符号最大值++
无符号0 --
无符号最大值 ++


## Exercise 4.8
> Explain when operands are evaluated in the logical AND, logical OR, and equality operators.
and: 左边为true再计算右边
or: 左边为false再计算右边
==: 没有定义

## Exercise 4.9
> Explain the behavior of the condition in the following if:
```c++ 
const char *cp = "Hello World";
if(cp&&*cp)
```
cc: true
cp为指针: 非空即为true
cp为字符: 'H' 非0为true


## Exercise 4.10
> Write the condition for a while loop that would read ints from the standard input and stop when the value read is equal to 42.

## Exercise 4.11
> Write an expression that tests four values, a,b,c,and d, and ensures that a is greater than b, which is greater than c, which is greater than d.

## Exercise 4.12
> Assuming i, j, and k are all ints, explain what i!=j<k means.

cc: i不等于j<k的结果

## Exercise 4.13
What are the values of i and d after each assignment?
int i ; double d;
(a) d = i = 3.5; // i=3,d=3
(b) i = d= 3.5; // i=3, d=3.5

(a) d=3.0 不是3!!!

## Exercise 4.14
> Explain what happens in each of the if tests:
if(42=i)// 42不能被赋值
if(i=42)//

## Exercise 4.15
> The following assignment is illegal. Why? How would you correct it?
double dval; int ival; int *pi;
dval = ival = pi = 0; 
pi 不能赋值给ival

## Exercise 4.16
> Although the following are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be.

(a) (p=getPtr()!=0) // ((p=getPtr())!=0)
(b) if(i=1024) // if(i==1024)

## Exercise 4.17
> Explain the difference between prefix and postfix increment.

cc: 前++ , 先递增后返回, 不需要缓存旧值

## Exercise 4.18
> What would happen if the while loop on page 148 that prints the elements from a vector used the prefix increment operator?

## Exercise 4.19
> Given that ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?
(a) ptr!=0 && *ptr++
(b) ival++ && ival
(c) vec[ival++] <= vec[ival] // vec[ival] <= vec[ival+1]


## Exercise 4.20
> Assuming that iter is a vector<string>::iterator, indicate which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren't legal are in error.

(a) *iter++; // 返回 `*iter` 然后++
(b) (*iter)++; // 不合法, string 没有++
(c) *iter.empty(); // error, iter没有empty成员
(d) iter->empty();
(e) ++*iter; // string没有++
(f) iter++->empty(); // 先执行->, 然后++

cc: 与符号位置有关吗?
```c++ 
    vector<int> v = {1, 5, 10};
    auto iter = v.begin();
    cout << (++*iter) << endl; //2

    v = {1, 5, 10};
    iter = v.begin();
    cout << (*++iter) << endl;// 5
```

## Exercise 4.21
> Write a program to use a conditional operator to find the elements in a vector<int> that have odd value and double the value of each such element.

## Exercise 4.22
> Extend the program that assigned high pass, pass, and fail grades to also assign low pass for grades between 60 and 75 inclusive. Write two versions: One version that uses only conditional operators; the other should use one or more if statements. Which version do you think is easier to understand and why?

## Exercise 4.23
> The following expression fails to compile due to operator precedence. Using Table 4.12, explain why it fails. How would you fix it?

string s =  "word";
string p1 = s + (s[s.size()-1] == 's'?"":"s");

## Exercise 4.24
> Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative.

## Exercise 4.25
> What is the value of ~'q'<<6 on a machine with 32-bit ints and 8-bit chars, that uses Latin-1 character set in which 'q' has the bit pattern 01110001?

cc: ~ 的优先级高于移位, 1000 1110
左移6位, 1110 0011 1000 0000



## Exercise 4.26
> In our grading example in this section, what would happen if we used unsigned int as the type for quiz1?
cc: int只保证16, 可能位置不够

## Exercise 4.27
> What is the result of each of these expressions?

unsigned long ul1 = 3, ul2 = 7;
(a) ul1&ul2; // 3
(b) ul1|ul2; // 7
(c) ul1&&ul2; // true
(d) ul1 || ul2;// true

## Exercise 4.28
> Write a program to print the size of each of the built-in types.

## Exercise 4.29
> Predict the output of the following code and explain your reasoning. Now run the program . Is the output what you expected? If not, figure out why.

int x[10]; int *p = x;
cout<<sizeof(x)/sizeof(*x) <<endl; // 10
cout<<sizeof(p)/sizeof(*p)<<endl; //  8/2=4


## Exercise 4.30
> Using table 4.12, parenthesize the following expressions to match the default evaluation:

(a) sizeof x+y // (sizeof x)+y
(b) sizeof p->mem[i] // (sizeof p->mem[i])
(c) sizeof a<b /> // (sizeof a)<b
(d) sizeof f() // (sizeof f())

cc: 对于d, 如果f返回void , 结果未定义, 否则得到返回类型的大小

## Exercise 4.31
> The program in this section used the prefix increment and decrement operators. Explain why we used prefix nad not postfix. What changes would have to be made to use the postfix versions? Rewrite the program using postfix operators.

## Exercise 4.32
> Explain the following loop.

constexpr int size=5;
int ia[size] = {1,2,3,4,5};
for(int *ptr = ia, ix = 0; ix!=size && ptr!=ia+size; ++ix, ++ptr){/*...*/}

## Exercise 4.33
> Using Table 4.12 explain what the following expression does:

someValue ? ++x, ++y: --x, --y;

cc: 等价于(someValue ? ++x, ++y: --x), --y;

## Exercise 4.34
> Given the variable definitions in this section, explain what conversions take place in the following expressions:

(a) if(fval) // float 到bool
(b) dval = fval+ival; // ival到float, float到double
(c) dval+ival*cval; // ival到double, cval到int到double

## Exercise 4.35
> Given the following definitions, 
> char cval; int ival; unsigned int ui; float fval; double dval;
> identify the implicit type conversions , if any, taking place:
> (a) cval = 'a' +3; // char到 int, 然后到char
> (b) fval = ui-ival*1.0; // ival到double, ui到double, double到float
> (c) dval = ui  * fval; // ui到float, fval到double
> (d) cval = ival +fval +dval; // ival到float, fval到double, dval到char

cc: d中是先到int在到char , 还是直接到char?
升高一步步, 降低只要一步

## Exercise 4.36
> Assuming i is an int and d is a double write the expression i *= d so that it does integral , rather than floating-point, multiplication.

i* = static_cast<int>(d);

## Exercise 4.37
> Rewrite each of the following old-style casts to use a named cast:
> int i ; double d; const string &ps; char *pc; void *pv;
> (a) pv = (void*)ps; // pv = reinterpret_cast<void*>(const_cast<string&>(ps));
> (b) i = int(*pc); // i = static_cast<int>(*pc);
> (c) pv = &d;  
> (d) pc = (char*)pv; // reinterpret_cast<char*>(pv);

cc: (a) 可以写为const_cast<string*>(ps) , 因为void*可以接收任何非const指针
(d) 从void*中获取可以使用static_cast<char*>(pv)

## Exercise 4.38
> Explain the following expression:
> double slope = static_cast<double>(j/i);

