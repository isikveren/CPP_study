
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int a, b;
     a=10; b=0;
     while(a-->5)
         b+=a--;
     printf("%d,%d\n",a,b);
     getch();
     return 0;
 }

//3,21