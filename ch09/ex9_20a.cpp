#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <list>
using namespace std;

/**
> Write a program to copy elements from a list<int> into two deques. The
even-valued elements should go into one deque and the odd ones into the other.
 */

int main() {

    list<int> myList = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> evenDeque, oddDeque;

    for (int i : myList) {
        (i & 0x1? oddDeque : evenDeque).push_back(i);
    }

    cout << "Even deque: ";
    for (int i : evenDeque) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Odd deque: ";
    for (int i : oddDeque) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}