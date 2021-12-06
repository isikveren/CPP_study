#include<stdio.h>
int f1(int a[], char c[])
{
    int i, x, n;
    i=0; n=0;
    while(c[i])
    {
        x=c[i++]-97;
        a[x]++;
        if(n<x)
            n=x;
    }
    return n;
}
void f2(int a[], int n)
{
    int i;
    for(i=0; i<=n; i++)
        printf("%d",a[i]);
    printf("\n");
}
int main()
{
    char c[]="dbacacbaab";
    int a[10]={0}, n;
    n=f1(a,c);
    f2(a,n);
    return 0;
}
