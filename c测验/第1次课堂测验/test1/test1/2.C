
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int a=12, b=12;
     a+=a-=a*a; b+=b-=b*=b;
     printf("%d,%d\n",a,b);
     getch();
     return 0;
 }

//-264,0

