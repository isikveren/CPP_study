#include<stdio.h>
int main()
{
    void f(char *, char, char);
    char c[]="*ad*89*KG*";
    f(c,'a','z');
    printf("\"%s\"\n",c);
    f(c+7,'0','9');
    printf("\"%s\"\n",c);
    return 0;
}

void f(char *p, char ch1, char ch2)
{
    int i=0, j=0;
    while(p[i])
    {
        if(p[i]<ch1||p[i]>ch2) 
            p[j++]=p[i];
        i++;
    }
    p[j]='\0';
}