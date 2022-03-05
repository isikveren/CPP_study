#include <iostream>
#include <vector>

using std::vector;

int main()
{

    vector<int> ivec(11,0);
    int i, j = 11;
    while (std::cin >> i)
    {
        if(i<=100){
            ivec[i/10]++;
        }
    }
    std::cout<<"\n";
    for (int i = 0; i < j; i++)
    {
        std::cout << ivec[i] <<" ";
    }
    std::cout<<"\n";
    return 0;
}