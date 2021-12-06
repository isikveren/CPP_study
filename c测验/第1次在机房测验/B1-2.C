#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    a=3; b=0;
    while(a++<10)
        b+=a++;
    printf("%d,%d\n",a,b);
    getch();
    return 0;
}
