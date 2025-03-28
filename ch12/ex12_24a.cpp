#include "ex12_22.h"
using namespace std;

/**
> Write a program that reads a string from the standard input into a dynamically
allocated character array. describe how your program handles varying size
inputs. Test your program by giving it a string of data that is longer than the
array size you'va allocated.
 */

int main() {

    std::cout << "How long do you want the string? ";
    int size{0};
    std::cin >> size;
    char *input = new char[size + 1]();
    std::cin.ignore();
    std::cout << "input the string: ";
    std::cin.get(input, size + 1);
    std::cout << input;
    delete[] input;
    return 0;
}