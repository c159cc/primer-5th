
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
Write three different versions of a program to print the elements of ia. One
version should use a range for to manage the iteration, the other two should use
an ordinary for loop in one case using subscripts and in the other using
pointers. In all three programs write all the types directly. That is, do not
use a type alias, auto, or decltype to simplify the code.
 */

int main() {
  int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  using arr_t = int[4];
  for (arr_t &p : ia) {
    for (int i : p) {
      cout << i << " ";
    }
    cout << endl;
  }

  typedef int arr2[4];
  for (arr2 *p = ia; p != ia + 3; ++p) {
    for (int *q = *p; q != *p + 4; ++q) {
      cout << *q << " ";
    }
    cout << endl;
  }

  for (size_t i = 0; i < 3; ++i) {
    for (size_t j = 0; j < 4; ++j) {
      cout << ia[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
