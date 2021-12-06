#include<stdio.h>
#include"test4-1.h"
int main()
{
    int a[5]={5,1,2,9,9}, s=35;
    fun1(a,5,&s);
    printf("%d\n",s);
    return 0;
}
