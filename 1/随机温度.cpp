#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fp;
    fp = fopen("温度.txt","w+");
    int sum = 0, value = 0;
    time_t t;
    srand((unsigned)time(&t));
    float *r = (float *)malloc(sizeof(float) * 3);
    float *p = r;
    for(int j = 0;j<100;j++){
        for (int i = 0; i < 3; i++)
    {
        *p = 36 + (float)(rand() % 10) / 10;
        p++;
    }
    p = r;
    fprintf(fp, "早：%.1f/午：%.1f/晚：%.1f/晚点名：√\n", *p,*(p+1),*(p+2));
    //std::cout << "早：" << *(p) << "/午：" << *(p + 1) << "/晚：" << *(p + 2) << "/晚点名：√" << std::endl;
    }
    
    return 0;
}