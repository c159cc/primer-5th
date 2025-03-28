#include "ex12_22.h"
using namespace std;

/**
> Write a program that reads a string from the standard input into a dynamically
allocated character array. describe how your program handles varying size
inputs. Test your program by giving it a string of data that is longer than the
array size you'va allocated.
 */

int main() {

    cout << "Enter a character array size: ";
    int size = 0;
    cin >> size;// 回车键留在了输入缓冲区, 下一次cin会直接读取换行符
    cin.ignore(); // 忽略缓冲区的换行符
    char *arr = new char[size+1]();
    cout << "Enter a string: "<<endl;
    cin.get(arr, size+1); // 从cin中读取size个字符到arr中, 包括'\0'
    cout<< "The string is: " << arr << endl;

    delete[] arr;
    return 0;
}