#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n=0;
    char c[]="ab6Y328Zx";
    for(i=0;c[i]!='\0';i++)
        if(c[i]>='0'&&c[i]<='9')
            n++;
    printf("%d\n",n);
    return 0;
}
