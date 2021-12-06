#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, sum=0;
    int a[5]={9,1,3,4,5};
    while(a[i]%2!=0)
    {
        sum+=a[i];
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
