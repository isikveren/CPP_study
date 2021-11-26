#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sum = 0, value = 0;
    time_t t;
    srand((unsigned)time(&t));
    float *r = (float *)malloc(sizeof(float) * 3);
    float *p = r;
    for (int i = 0; i < 3; i++)
    {
        *p = 36 + (float)(rand() % 10) / 10;
        p++;
    }
    p = r;
    std::cout << "早：" << *(p) << "/午：" << *(p + 1) << "/晚：" << *(p + 2) << "/晚点名：√" << std::endl;
    return 0;
}