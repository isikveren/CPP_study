#include <iostream>
#include "Sales_item.h"

int main()
{
    int a = 1;
    std::cout << a << std::endl;

    bool b = 42;
    int i = b;
    i = 3.14;
    double pi = i;
    // unsigned char c = -1;
    // signed char c2 = 255;

    auto x = a + b;

    std::cout << "b = " << b
              << "\ni = " << i
              << "\npi = " << pi
              //   << "\nc = " << c
              //   << "\nc2 = " << c2
              << std::endl;

    std::cout << "x = " << x << std::endl;
    return 0;
}
