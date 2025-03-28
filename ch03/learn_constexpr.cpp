#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

size_t get_size()
{
    return 1;
}

int main()
{

    const size_t size = get_size();
    constexpr size_t size2 = strlen("Hello, world!");

    cout << "size: " << size << endl;
    cout << "size2: " << size2 << endl;
    return 0;
}