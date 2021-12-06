
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     float a1, a2;
     int b, c, d, e=179, f, g;
     int i=4;
     c=7; d=c/2; f=e%10; b=c+d+f;
     a1=b/3; a2=(float)b/3;
     printf("%.2f,%5.2f\n",a1,a2);
     printf("%d,%d,%d\n",b,d,f);
     i++;
     printf("%d\n",i);
     ++i;
     printf("%d\n",i);
     g=3+i++;
     printf("%d,%d\n",i,g);
     getch();
     return 0;
 }

/*
6.00, 6.33
19,3,9
5
6
7,9
*/


