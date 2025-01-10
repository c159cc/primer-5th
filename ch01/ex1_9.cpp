#include <iostream>

int main()
{

    int sum = 0, val = 50;
    while(val<=100){
        sum += val;
        ++val;
    }

    std::cout << "The sum of the first 50 numbers is: " << sum << std::endl;
    return 0;
}