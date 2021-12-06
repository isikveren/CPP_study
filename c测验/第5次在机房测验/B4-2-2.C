#include<stdio.h>
int main()
{
    void f1(int *, int);
    void f2(int *, int, int *);
    int a[5]={5,6,1,3,7}, s;
    f1(a,5);
    f2(a,5,&s);
    printf("%d\n",s);
    return 0;
}
void f1(int *p, int n)
{
    int *q;
    for(q=p; q<p+n-1; q++)
        *q=*(q+1)+2;
}
void f2(int *p, int n, int *s)
{
    int i;
    *s=0;
    for(i=0; i<n; i++)
        *s+=p[i];
}