#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, s=0;
    char c[]="Ya6b3G28d";
    for(i=0,j=0; c[i]!='\0'; i++)
        if(c[i]>='0'&&c[i]<='9')
            c[j++]=c[i];
    c[j]='\0';
    for(i=0; c[i]!='\0'; i++)
        s=s*10+(c[i]-'0');
    printf("%d\n",s);
    return 0;
}
