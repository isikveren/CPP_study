
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int i, s;
     s=50;
     i=10;
     while(i>5)
     {
         if(i%2)
             s-=10/i;
         else
             s-=2;
         i--;
     }
     printf("%d,%d\n",s,i);
     getch();
     return 0;
 }

//42,5