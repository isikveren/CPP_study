#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *p;
    p = (float *)malloc(sizeof(float) * 4);
    for (int i = 0; i < 4; i++)
    {
        *(p + i) = i * 10;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%.1f\n", *(p++));
    }
    return 0;
}