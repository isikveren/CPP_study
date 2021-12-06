#include<stdio.h>
typedef struct test
{
    char c[10];
    int a[3];
    int s;
}Test;
void f1(Test *p, int n, int m)
{
    int i;
    struct test *q;
    for(q=p; q<p+n; q++)
        for(i=0; i<m; i++)
            q->s+=q->a[i];
}
void f2(Test *p, int n, int *q)
{
    int i, x, sub;
    x=p->s; sub=0;
    for(i=1; i<n; i++)
        if(x<(p+i)->s)
        {
            x=(p+i)->s;
            sub=i;
        }
    *q=sub;
}
int main()
{
    Test a[3]={{"abc",{5,1,2},0},
               {"xyz",{6,2,1},0},
               {"XYZ",{2,2,1},0}};
    int n;
    f1(a,3,3);
    f2(a,3,&n);
    printf("%s\n",a[n].c);
    return 0;
}
