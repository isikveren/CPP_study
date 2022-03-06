#include <iostream>
#include <cctype>
#include <vector>

using std::vector;
int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = ivec.begin(); it != ivec.end(); ++it)
    {
        *it *= 2;
        std::cout << *it << " ";
    }
    auto mid = ivec.begin() + ivec.size() / 2;
    std::cout << *mid << std::endl;
    return 0;
}