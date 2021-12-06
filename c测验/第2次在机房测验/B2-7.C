#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, s=0;
    char c[]="Ya6b3G28d";
    int a[10];
    i=0; j=0;
    while(c[i]!='\0')
    {
        if(c[i]>='a'&&c[i]<='z')
            c[j++]=c[i];
        i++;
    }
    c[j]='\0';
    for(i=0; i<j; i++)
    {
        a[i]=c[i]-97;
        s=s+a[i];
    }
    printf("%d\n",s);
    getch();
    return 0;
}
