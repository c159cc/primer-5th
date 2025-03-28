## Exercise 11.1
> Describe the differences between a map and a vector.
map: 键值对, 使用key访问
vector: 顺序存储, 随机访问

## Exercise 11.2
> Given an example of when each of list, vector, deque, map, and set might be most useful.
list: 删除中间元素
vector:
deque: 头部删除
map: word_count
set: 存在检查


## Exercise 11.3
> Write your own version of the word-counting program.

## Exercise 11.4
> Extend your program to ignore case and punctuation. For example, "example." "example," and  "Example" should all increment the same counter.

## Exercise 11.5
> Explain the difference between a map and a set. When might you use one or the other?
存在性用set

## Exercise 11.6
> Explain the difference between a set and a list. When might you use one or the other?
cc: set, 存在性检查

## Exercise 11.7
> Define a map for which the key is the family's last name and the value is a vector of the children's names. Write code to add new families and to add new children to an existing family.

## Exercise 11.8
> Write a program that store the excluded words in a vector instead of in a set. What are the advantages to using a set?
set: 性能更好

## Exercise 11.9
> Define a map that associates words with a list of line numbers on which the word might occur.
map<string, vector<int>> word_line_map;

## Exercise 11.10
> Could we define a map from vector<int>::iterator to int? What about from list<int>::iterator to int? In each case, if not , why not?
cc: 能不能作为key看是否实现 < operator
vector可以, list不可以

## Exercise 11.11
> Redefine bookstore without using decltype.

## Exercise 11.12
> Write a program to read a sequence of strings and ints storing each into a pair. Store the pairs in a vector.
cc: make_pair 不用写类型, 类型是编译器自己推断的

## Exercise 11.13
> There are at least three ways to create the pairs in the program for the previous exercise. Write three versions of that program, creating the pairs in each way. Explain which form you think is easiest to write and understand, and why.

## Exercise 11.14
> Extend the map of children to their family name that you wrote for the exercise in 11.2.1 by having the vector store a pair that holds a child's name and birthday.

## Exercise 11.15
> What are the mapped_type, key_type, and value_type of a map from int to vector<int>?
value_type: pair<const int, vector<int>>
mapped_type: vector<int>
key_type: int

## Exercise 11.16
> Using a map iterator write an expression that assigns a value to an element.
```c++ 
map<int, string> map;
map[25] = "Alan";
map<int, string>::iterator it = map.begin();
it->second = "Bob";
```

## Exercise 11.17
> Assuming c is a multiset of strings and v is a vector of strings, explain the following calls. Indicate whether each call is legal:
```c++ 
copy(v.begin(), v.end(), inserter(c, c.end()));
copy(v.begin(), v.end(), back_inserter(c)); // 没有push_back
copy(c.begin(), c.end(), inserter(v, v.end()));
copy(c.begin(), c.end(), back_inserter(v));
```

## Exercise 11.18
> Write the type of map_it from the loop on page 430 without using auto or decltype.
auto map_it = word_count.cbegin();
map<string, size_t>::const_iterator map_it;

## Exercise 11.19
> Define a variable that you initialize by calling begin() on the multiset named bookstore from 11.2.2. Write the variable's type without using auto or decltype.
multiset<Sales_data, decltype(compareIsbn)*> bookstore(compareIsbn);
maultiset<Sales_data, decltype(compareIsbn)*>::const_iterator  = bookstore.begin();

## Exercise 11.20
> Rewrite the word-counting program from 11.1 to use insert instead of subscripting. Which program do you think is easier to write and read? Explain your reasoning.


## Exercise 11.21
> Assuming word_count is a map from string to size_t and word is a string , explain the following loop:
while(cin>>word)
  ++word_count.insert({word,0}).first->second;

## Exercise 11.22
> Given a map<string, vector<int>> write the types used as an argument and as the return value for the version of insert that inserts one element.
pair<string, vector<int>>;
pair<map<string, vector<int>>::iterator, bool>;
第一个参数是指向pair的迭代器不是pair

## Exercise 11.23
> Rewrite the map that stored vectors of children's names with a key that is the family last name for the exercises in 11.2.1 to use a multimap.

## Exercise 11.24
> What does the following program do?
map<int, int> m;
m[0] = 1;
cc: 插入一个元素key为0, value为1

## Exercise 11.25
> Contrast the following program with the one in the previous exercise
vector<int> v;
v[0] = 1;

## Exercise 11.26
> What type can be used to subscript a map? What type does the subscript operator return ? Give a concrete example - that is , define a map and then write the types that can be used to subscript the map and the type that would be returned from the subscript operator.
value_type
key_type

## Exercise 11.27
> What kinds of problems would you use count to solve? When might you use find instead?
cc: 总是用find除非有必要用count

## Exercise 11.28
> Define and initialize a variable to hold the result of calling find on a map from string to vector of int.
map<string, vector<int>> word_line;
map<string,vector<int>>::iterator it;

## Exercise 11.29
> What do upper_bound , lower_bound, and equal_range return when you pass them a key that is not in the container?
lower_bound 第一个大于等于k的位置
upper_bound 第一个大于k的位置
equal_range lower_bound和upper_bound的范围

## Exercise 11.30
> Explain the meaning of the operand pos.first->second used in the output expression of the final program in this section.
first表示pair, first的second表示value

## Exercise 11.31
> Write a program that defines a multimap of authors and their works. Use find to find an element in the multimap and erase that element. Be sure your program works correctly if the element you look for is not in the map.

## Exercise 11.32
> Using the multimap from the previous exercise, write a program to print the list of authors and their works alphabetically.

## Exercise 11.33
> Implement your own version of the word-transformation program.

## Exercise 11.34
> What would happen if we used the subscript operator instead of find in the transform function?

## Exercise 11.35
> In buildMap, what effect, if any, would there be from rewriting
```c++ 
trans_map[key] = value.substr(1); // 最后一个
as trans_map.insert({key, value.substr(1)})? // 第一个
```
可能会插入失败, 那么相同的key保留第一个

## Exercise 11.36
> Our program does no checking on the validity of either input file. In particular, it assumes that the rules in the transformation file are all sensible. What would happen if a line in that file has a key, one space, and then the end of the line ? Predict the behavior and then check it against your version of the program.

## Exercise 11.37
> What are the advantages of an unordered container as compared to the ordered version of that container? What are the advantages of the ordered version?
key 本身无序使用unordered

## Exercise 11.38
> ReWrite the word-counting 11.1 and word-transformation 11.3.6 programs to use an unordered_map.


