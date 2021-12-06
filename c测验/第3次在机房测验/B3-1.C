#include<stdio.h>
#include<string.h>
void f(char c[])
{
    int i, j;
    char t;
    i=0;
    j=strlen(c)-1;
    while(i<j)
    {
        t=c[i]; c[i]=c[j]; c[j]=t;
        i++; j--;
    }
}
int main()
{
    char c[]="abcdef";
    f(c);
    printf("\"%s\"\n",c);
    return 0;
}
