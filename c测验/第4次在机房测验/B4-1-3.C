/*
程序的功能：统计字符串中指定形式的字符的数量。
程序中函数fun完成统计工作，根据函数给出的首部内
容及主函数main的内容，将函数fun的函数体填写完整。
注意：函数fun的第三、四形参接收的数据决定了所要
      统计的字符在ASCII码表中的范围。
*/
#include<stdio.h>
void fun(char *c, int *n, char c1, char c2)
{
    *n=0;
    while(*c)
    {
        if(*c>='a'&&*c<='z')
            (*n)++;
        c++;
    }
}
int main()
{
    char c[100];
    int n;
    printf("输入一个字符串："); gets(c);
    fun(c,&n,'a','z');
    printf("符合要求的字符有%d个\n",n);
    return 0;
}
