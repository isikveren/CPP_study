#include <stdio.h>
#include <iostream>
#include <string.h>

struct student
{
    int num;
    float score;
    struct student *next;
};

int main()
{
    FILE *fp;
    char a;
    fp = fopen("文件.txt", "a+");
    for (int i = 0; i < 100; i++)
    {
        fprintf(fp, "%s\n", "hello world!");
    }
    // while(std::cin>>a){
    //     fprintf(fp, "%c\n", a);
    //     if(a == 0|| a== '0') break;
    // }

    fclose(fp);
    return 0;
}