#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7};
    int i, s=0;
    for(i=0; i<6; i+=2)
        if(a[i]%3)
            a[i]+=2;
    for(i=0; i<7; i++)
        s+=a[i];
    printf("%d\n",s);
    return 0;
}
