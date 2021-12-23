#include <iostream>
int main()
{
    int a[5][5] = {0},n=1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = n;
            n++;
            std::cout << a[i][j] << "\t";
        }
        printf("\n");
    }
}