#include <stdio.h>

struct student
{
    int num;
    float score;
    struct student *next;
};

int main()
{
    FILE *fp;
    fp = fopen("文件.txt", "w+");
    for (int i = 0; i < 10; i++)
    {
        fprintf(fp, "%d\t", 2021);
    }

    fclose(fp);
    return 0;
}