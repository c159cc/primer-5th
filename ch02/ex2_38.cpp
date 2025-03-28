#include <iostream>

int main()
{
    int i = 10, &r = i;
    auto j = i;
    decltype(i) k = i;
    auto l = r;
    decltype(r) m = r;

    l = 90;
    std::cout << "i=" << i << std::endl; // 10
    m = 100;
    std::cout << "i=" << i << std::endl; // 100

    return 0;
}