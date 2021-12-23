#include<stdio.h>
struct test
{
    int a;
    char c[10];
};
int fun(struct test *p, int n)
{
    int i, j, num=0;
    for(i=0; i<n; i++)
    {
        j=0;
        while(p->c[j])
        {
            if(p->c[j]>='0'&&p->c[j]<='9')
                p->a++;
            j++;
        }
        num+=p->a;
        p++;
    }
    return num;
}
int main()
{
    struct test a[3]={
                     {0,"a8b2c7"},
                     {0,"12s3y4"},
                     {0,"XY6Z"}
                     };
    int n;
    n=fun(a,3);
    printf("%d\n",n);
    return 0;
}