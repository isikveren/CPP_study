#include<stdio.h>
#include<conio.h>
int main()
{
    int i, s=20;
    int a[5]={6,1,9,2,3};
    for(i=0; i<5; i++)
        if(a[i]%3==0)
            s-=a[i];
    printf("%d\n",s);
    return 0;
}
