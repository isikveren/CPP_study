
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int a=8, b=3;
     if(a%b)
     { a+=b; b-=2; }
     else
     { b=a-2; a=a+b; }
     printf("%d\n",a-b);
     getch();
     return 0;
 }

//10