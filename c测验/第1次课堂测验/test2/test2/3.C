
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int a=0, b=12;
     switch(b/10)
     {
         case 1:a++;
         case 2:a+=1; break;
         case 3:a*=2;
         default: a+=2;
     }
     printf("%d\n",a);
     getch();
     return 0;
 }

 //2
