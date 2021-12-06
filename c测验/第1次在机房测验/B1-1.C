#include<stdio.h>
#include<conio.h>
int main()
{
    int i, x;
    for(x=1, i=1; i<6; i++)
        if(x%i)
            x++;
        else
            x+=2;
    printf("%d,%d\n",x,i);
    getch();
    return 0;
}
