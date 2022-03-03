#include <iostream>
#include <string>

int main()
{

    std::string line, s1 = "";
    while (getline(std::cin, line))
    {
        std::cout << "line = " << line << std::endl;
        s1 += line;
        std::cout << "s1 = " << s1 << std::endl;
    }

    return 0;
}