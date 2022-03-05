#include <iostream>
#include <vector>

using std::vector;

int main()
{

    vector<int> ivec;
    int i, j = 0;
    while (std::cin >> i)
    {
        ivec.push_back(i);
        j++;
    }
    
    for (int i = 0; i < j; i++)
    {
        std::cout << ivec[i] << std::endl;
    }
    return 0;
}