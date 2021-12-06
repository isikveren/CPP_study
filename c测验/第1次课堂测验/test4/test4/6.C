
 #include<stdio.h>
 #include<conio.h> 
 int main()
 {
     int i, s;
     s=0;
     for(i=1; i<6; i++)
         if(i%2==1)
             s+=10/i;
         else
             s++;
     printf("%d,%d\n",s,i);
     getch();
     return 0;
 }

//17,6