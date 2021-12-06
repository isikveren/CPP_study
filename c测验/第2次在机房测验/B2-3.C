#include<stdio.h>
#include<conio.h>
#define N 6
int main()
{ 
    int i, s=0;
    int a[N]={6,1,5,2,3};
    for(i=0; i<N-1; i++)
        if(a[i]%2)
            s+=a[i];
    a[i]=s;
    for(i=0;i<N;i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}
